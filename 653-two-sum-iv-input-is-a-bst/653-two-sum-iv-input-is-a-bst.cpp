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
    bool findTarget(TreeNode* root, int k) {
   if(root == NULL)
		{
			return true;
		}

		vector<int> v;
	
		inOrder(root,v);
        
        set<int> s;
        
		for(int i =0;i<v.size();i++)
		{
			if(s.find(k-v[i]) != s.end())
                return true;
            else
                s.insert(v[i]);
		}
		return false;
	}

	void inOrder(TreeNode* root, vector<int>& v)
	{
		if(root == NULL)
		{
			return ;
		}
		if(root->left != NULL)
		{
			inOrder(root->left,v);
		}
		v.push_back(root->val);
		if(root->right != NULL)
		{
			inOrder(root->right,v);
		}
		return;
	}
};