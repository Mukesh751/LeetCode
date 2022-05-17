/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* target;
    TreeNode* ref;
    void solve(TreeNode* root)
    {
        if(root==nullptr)
            return;
        
        if(root->val == target->val)
        {  ref = root;
           return;
        }
        solve(root->left);
        solve(root->right);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        this->target = target;
        solve(cloned);
        return ref;
    }
};