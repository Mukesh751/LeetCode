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
    int getHeight(TreeNode* root) {
        if(!root) return 0;
        return max(1+getHeight(root->left), 1+getHeight(root->right));
    }
    vector<vector<string>> printTree(TreeNode* root) {
        int h=getHeight(root)-1;
        int n=pow(2, h+1)-1;
        vector<vector<string>> ans(h+1, vector<string> (n, ""));
        queue<TreeNode*> q;
        queue<pair<int,int>> rc;
        if(!root) return ans;
        int r=0;
        q.push(root);
        rc.push({0,n});
        while(!q.empty()) {
            int n=q.size();
            for(int i=0; i<n; ++i) {
                TreeNode* curr=q.front();
                q.pop();
                int low=rc.front().first;
                int high=rc.front().second;
                int mid=low+(high-low)/2;
                rc.pop();
                ans[r][mid]=to_string(curr->val);
                if(curr->left) {
                    q.push(curr->left);
                    rc.push({low,mid-1});
                }
                if(curr->right) {
                    q.push(curr->right);
                    rc.push({mid+1,high});
                }
            }
            r++;
        }
     return ans;
    }
};