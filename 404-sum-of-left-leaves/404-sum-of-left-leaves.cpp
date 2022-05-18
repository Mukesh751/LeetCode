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
    int ans = 0;
    void solve(TreeNode* root, int i)
    {
        if(root == nullptr)
            return;
        
        if(i == 1 && root->left == nullptr && root->right==nullptr)
            ans+= root->val;
        
        solve(root->left, 1);
        solve(root->right,2);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        solve(root,0);
        return ans;
    }
};