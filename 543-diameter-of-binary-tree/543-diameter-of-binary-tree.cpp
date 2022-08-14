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
    int mxh (TreeNode* root){
        if(root == nullptr)
            return 0;
        //if(root->left == nullptr && root->right == nullptr) return 0;
        return 1 + max(mxh(root->left),mxh(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr)
            return 0;
        
        return max(mxh(root->left)+mxh(root->right),max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right))) ;
    }
};