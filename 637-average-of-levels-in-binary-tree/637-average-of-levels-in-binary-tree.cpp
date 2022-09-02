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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<int>> v;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        vector<int> temp;
        while(q.size()>0){
            TreeNode* curr = q.front();
            q.pop();
            if(curr == nullptr){
                v.push_back(temp);
                temp.clear();
                if(q.size() > 0)
                    q.push(nullptr);
                continue;
            }
            temp.push_back(curr->val);
            if(curr->left != nullptr)
                q.push(curr->left);
            if(curr->right != nullptr)
                q.push(curr->right);
        }
        vector<double> ans;
        for(auto x : v){
            double d = 0;
            for(auto y: x)
                d+=y;
            d = (double)d/(x.size());
            ans.push_back(d);
        }

        return ans;
    }
};