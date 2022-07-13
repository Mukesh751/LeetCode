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
    vector<TreeNode*> v;
    void dfs(TreeNode* root){  
        if(root==NULL) return;
        v.push_back(root);
        dfs(root->left);
        dfs(root->right);
    }

    void flatten(TreeNode* root) {
        if(root==NULL) return;
        dfs(root);

        TreeNode* prev = v[0];
        for(int i=1; i<v.size(); i++){
            TreeNode* curr  = v[i];
            prev->right = curr;
            prev->left = NULL;
            prev = curr;
        }
    }
};