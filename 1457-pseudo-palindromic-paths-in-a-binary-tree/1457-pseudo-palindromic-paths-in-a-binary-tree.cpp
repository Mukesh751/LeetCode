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
    int ans = 0;
    void solve(TreeNode* root, vector<int> v){
        if(root == nullptr)
            return;
        if(root->left == nullptr && root->right == nullptr){
            int count = 0;
            v[root->val]++;
            for(auto x : v){
                if(x%2 == 1)
                    count++;
            }
            // for(int i = 0; i<v.size(); i++){
            //     if(v[i] != 0){
            //         cout<<i<<"->"<<v[i]<<" ";
            //     }
            // }
            // cout<<endl;
            if(count<=1)
                ans++;
            return;
        }
        v[root->val]++;
        solve(root->left,v);
        solve(root->right,v);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> v(10,0);
        solve(root,v);
        return ans;
    }
};