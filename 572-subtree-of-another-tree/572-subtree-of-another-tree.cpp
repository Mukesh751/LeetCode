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
    bool solve (TreeNode* root, TreeNode* sroot, int p = 0){
        if(root == nullptr && sroot == nullptr)
            return true;
        if(root == nullptr || sroot == nullptr)
             return false;
        
        bool temp = false;
        if(root->val == sroot->val){
            temp = solve(root->left,sroot->left) && solve(root->right,sroot->right);
        }
        return temp;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
          if(root == nullptr && subRoot == nullptr)
            return true;
        if(root == nullptr || subRoot == nullptr)
             return false;
        return solve(root,subRoot)||isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
};