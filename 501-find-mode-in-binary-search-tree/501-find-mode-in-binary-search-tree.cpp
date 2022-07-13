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
    map<int,int> m;
    
    void solve(TreeNode* root){
        if(root == nullptr)
            return;
        
        m[root->val]++;
        solve(root->left);
        solve(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        
        solve(root);
        vector<pair<int,int>> v;
        for(auto x : m)
           v.push_back(x);
        
        sort(v.rbegin(),v.rend(),[](auto &l , auto &r){
           return l.second < r.second ;   
        });
        
        // for(auto x : v){
        //     cout<<x.first<<" "<<x.second;
        //     cout<<endl;
        // }
        int mx = v[0].second;
        vector<int> ans;
        ans.push_back(v[0].first);
        int i = 1;
        while(i<v.size() && v[i].second == mx){
            ans.push_back(v[i].first);
            i++;}
        return ans;
    }
};