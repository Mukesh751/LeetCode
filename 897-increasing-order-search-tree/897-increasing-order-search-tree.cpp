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
    void inorder(TreeNode* root,vector<int>&v){
		if(!root)return;
        
        if(root->left){
            inorder(root->left,v);
        }
        if(root){
          v.push_back(root->val);
        }
        if(root->right){
            inorder(root->right,v);
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL)return NULL;
        vector<int>v;
        inorder(root,v);
            
        TreeNode * head = new TreeNode(v[0]);
        TreeNode * temp = head;
        for(int i=1;i<v.size();i++){
            temp->right = new TreeNode(v[i]);
            temp = temp->right;
        }
        return head;
    }
};