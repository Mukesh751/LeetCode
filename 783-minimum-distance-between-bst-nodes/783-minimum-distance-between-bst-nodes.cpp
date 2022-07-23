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
    vector<int> v;
    
    void preorder(TreeNode* root){
        if(root == nullptr)
            return;
        
        preorder(root->left);
        v.push_back(root->val);
        preorder(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        preorder(root);
        int mn = INT_MAX;
        for(int i = 1; i<v.size(); i++)
            mn = min(mn,v[i]-v[i-1]);
        return mn;
    }
};