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
    map<TreeNode*,int> m;
    int rob(TreeNode* root) {
       if(!root)
            return 0;
        
        if(m.find(root)!=m.end())
            return m[root];
        
        int op1=root->val;  
        op1+=(root->left)? (rob(root->left->left)+rob(root->left->right) ):0;
        op1+=(root->right)? (rob(root->right->left)+rob(root->right->right) ):0;
        
        int op2=rob(root->left)+rob(root->right); 
        
        return m[root]=max(op1,op2);
    }
};