/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count = 0;

    void solve(TreeNode* root,int x){
        if(root == nullptr)
            return;
        if(root->val >= x)
        {count++;
         x = root->val;
        }
        solve(root->right,x);
        solve(root->left,x);
    }
    int goodNodes(TreeNode* root) {
        int x = root->val;
        solve(root,x);
        return count;
    }
};