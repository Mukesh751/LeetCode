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
    bool isValidBST(TreeNode* root) {
  if(root == NULL)
		{
			return true;
		}

		vector<int> v;
	
		inOrder(root,v);

		for(int i =0;i<v.size()-1;i++)
		{
			if(v[i] >= v[i+1])
			{
				return false;
			}
		}
		return true;
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