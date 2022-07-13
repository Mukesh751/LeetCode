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
    int sum = 0;
    void solve (TreeNode* root, string s){
        if(root == nullptr)
            return;
        
        s.push_back(root->val+'0');
        
        if(root->left == nullptr && root->right == nullptr){
            int x = stoi(s);
            sum+=x;
        }
        solve(root->left,s);
        solve(root->right,s);
    }
    int sumNumbers(TreeNode* root) {
        string s = "";
        solve(root,s);
        return sum;
    }
};