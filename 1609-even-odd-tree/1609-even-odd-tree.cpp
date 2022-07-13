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
    bool isEvenOddTree(TreeNode* root) {
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
        for(auto x : ans){
            for(auto y : x)
                cout<<y<<" ";
            cout<<endl;
        }
        for(int i = 0 ; i<ans.size(); i++){
            if(i%2 == 0){
                if(ans[i][0]%2 == 0)
                    return false;
                for(int j = 1; j<ans[i].size(); j++){
                    if(ans[i][j]%2==0 || ans[i][j]<=ans[i][j-1])
                        return false;
                }
            }
            else{
                if(ans[i][0]%2 == 1)
                    return false;
                for(int j = 1; j<ans[i].size(); j++){
                    if(ans[i][j]%2==1 || ans[i][j]>=ans[i][j-1])
                        return false;
                }
            
            }
        }
        return true;
    }
};