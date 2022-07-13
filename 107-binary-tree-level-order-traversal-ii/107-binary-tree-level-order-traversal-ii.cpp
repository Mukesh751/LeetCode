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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         if(root == nullptr)
            return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        vector<int> temp;
        q.push(nullptr);
        while(q.size()!=0)
        {
            TreeNode* curr = q.front();
            q.pop();
            if(curr == nullptr)
            {
                ans.push_back(temp);
                temp.clear();
                if(q.size()!= 0)
                q.push(curr);
                continue;
            }
            if(curr->left != nullptr)
                q.push(curr->left);
            if(curr->right != nullptr)
                q.push(curr->right);
            
            temp.push_back(curr->val);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};