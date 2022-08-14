/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root == nullptr)
            return ans;
        queue<Node*> q;
        q.push(root);
        q.push(nullptr);
        vector<int> temp;
        while(q.size()>0){
            Node* curr = q.front();
            q.pop();
            if(curr == nullptr){
                if(q.size()>0)
                    q.push(curr);
                
                ans.push_back(temp);
                temp.clear();
                continue;
            }
            
            temp.push_back(curr->val);
            for(int i = 0; i<curr->children.size(); i++)
                q.push(curr->children[i]);
            
        }
        return ans;
    }
};