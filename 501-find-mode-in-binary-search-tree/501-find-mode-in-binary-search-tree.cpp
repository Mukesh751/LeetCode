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
   vector<int>result;
    int maxFreq=0,current=0,freq=0;
    
    vector<int> findMode(TreeNode* root) {
        
       if(!root)
            return result;
  
       findMode(root->left);
        
    
       if(current!=root->val)
       {
           freq=1;
           current=root->val;
       }

       else if(current==root->val)
       {
         freq++;   
       }
       if(freq>maxFreq)
       {
           maxFreq=freq;
           result={current};
           
       }
        else if(freq==maxFreq)
        {
            result.push_back(current);
        }
        
       findMode(root->right);
        
         return result;
    }
   
};