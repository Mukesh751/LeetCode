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
    bool contain (TreeNode* root){
        if(root == nullptr)
            return false;
        
        if(root->val == 1)
            return true;
        
        return contain(root->left)||contain(root->right);
    }
    void solve(TreeNode* root){
        if(root == nullptr)
            return;
        
        if(!contain(root->left))
            root->left = nullptr;
        
         if(!contain(root->right))
            root->right = nullptr;
        
        solve(root->left);
        solve(root->right);
    }
    TreeNode* pruneTree(TreeNode* root) {
        solve(root);
        
        if(root->left == nullptr && root->right == nullptr && root->val == 0)
            return nullptr;
        
        return root;
    }
};