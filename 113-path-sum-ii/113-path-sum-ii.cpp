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
    vector<vector<int>> ans;
    int target;
    
    void solve (TreeNode* root, vector<int> v, int sum){
        if(root == nullptr)
            return;
        
        v.push_back(root->val);
        sum+=root->val;
        
        if(sum == target && root->left == nullptr && root->right == nullptr){
            ans.push_back(v);
            return;
        }
        solve(root->left,v,sum);
        solve(root->right,v,sum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        target = targetSum;
        vector<int> v;
        int sum = 0;
        solve(root,v,sum);
        return ans;
    }
};