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
    bool solve(TreeNode *root,int sum,int cur)
    {
        if(root==NULL)
            return false;
        
        cur+=root->val;
        
        if(!root->left &&!root->right&&sum==cur)
            return true;    
        
        return solve(root->left,sum,cur) || solve(root->right,sum,cur);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return solve(root,targetSum,0);
        
    }
};