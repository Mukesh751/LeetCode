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
    map<pair<int,int>,vector<int>> m;
    int n = INT_MAX;
    
    void solve(TreeNode* root, int d, int x){
       queue<pair<pair<int,int>,TreeNode*>> q;
        q.push({{x,d},root});
        q.push({{x,d},nullptr});
        while(q.size()>0){
            auto curr = q.front();
            q.pop();
            if(curr.second == nullptr){
                if(q.size()>0)
                    q.push({{x,d},nullptr});
                continue;
            }
            x = curr.first.first;
            d = curr.first.second;
            n = min(n,x);
            m[curr.first].push_back(curr.second->val);
            if(curr.second->left != nullptr){
                q.push({{x-1,d+1},curr.second->left});
            }
            if(curr.second->right != nullptr){
                q.push({{x+1,d+1},curr.second->right});
            }
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root,0,0);
        vector<vector<int>> v;
        
        vector<int> temp;
      //  set<pair<int,int>> s;
        for(auto x : m ){
           if(x.first.first == n){
               sort(x.second.begin(),x.second.end());
               for(auto y : x.second)
                   temp.push_back(y);
            }
            else{
                n = x.first.first;
                v.push_back(temp);
                temp.clear();
                sort(x.second.begin(),x.second.end());
               for(auto y : x.second)
                   temp.push_back(y);
            }
        }
        v.push_back(temp);
        return v;
    }
};