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
    bool ans = true;
    void solve(TreeNode* leftroot, TreeNode* rightroot)
    {
        if(leftroot == nullptr && rightroot == nullptr)
            return;
        if(leftroot == nullptr || rightroot == nullptr)
        {
            ans = false;
            return;
        }
        if(leftroot->val != rightroot->val)
        {
            cout<<leftroot->val<<" "<<rightroot->val<<endl;
            ans = false;
            return;
        }
        solve(leftroot->left,rightroot->right);
        solve(leftroot->right,rightroot->left);
    }
    bool isSymmetric(TreeNode* root) {
        solve(root->left,root->right);
        return ans;
    }
};