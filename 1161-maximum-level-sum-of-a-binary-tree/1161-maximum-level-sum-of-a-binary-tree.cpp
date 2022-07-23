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
    int maxLevelSum(TreeNode* root) {
      if(root == nullptr)
            return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;
        int sum = 0;
        q.push(nullptr);
        while(q.size()!=0)
        {
            TreeNode* curr = q.front();
            q.pop();
            if(curr == nullptr)
            {
                ans.push_back(sum);
                sum = 0;
                if(q.size()!= 0)
                q.push(curr);
                continue;
            }
            if(curr->left != nullptr)
                q.push(curr->left);
            if(curr->right != nullptr)
                q.push(curr->right);
            
            sum+=curr->val;
        }
        int idx = 0;
        int mx = INT_MIN;
        for(int i = 0; i<ans.size(); i++)
            if(ans[i]>mx)
            {
                mx = ans[i];
                idx = i;
            }
        return idx+1;
    }
};