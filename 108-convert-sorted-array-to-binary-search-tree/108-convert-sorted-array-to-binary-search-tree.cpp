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
    vector<int> nums;
    TreeNode* solve (int l, int r){
        if(l>r)
            return nullptr;
        int mid = (l+r)/2;
        
        TreeNode* root = new TreeNode(nums[mid]);
        // TreeNode* le = 
        // TreeNode* ri = 
        root->left = solve(l,mid-1);
        root->right = solve(mid+1,r);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        this->nums = nums;
        return solve(0,nums.size()-1);
    }
};