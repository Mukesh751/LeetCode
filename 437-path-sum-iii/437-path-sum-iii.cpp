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
    
    void solve(TreeNode* root, int target, long long int sum, long long int& count){
        if(root == nullptr)
            return;
        if(target == sum + root->val)
            count++;
        
        solve(root->left,target,sum+root->val, count);
        
        solve(root->right,target, sum+root->val, count);

    }
    
//     void fun(TreeNode* root, int target){
        
//         if(root == nullptr)
//             return ;
        
//         solve(root,target,0);
//         fun(root->left,target);
//         fun(root->right,target);
//     }
    
    int pathSum(TreeNode* root, int target) {
        if(!root)
            return 0;
        long long int count = 0;
        solve(root,target,0, count);
        int l = pathSum(root->left,target);
        int r = pathSum(root->right, target);
        return count + l + r ;
    }
};