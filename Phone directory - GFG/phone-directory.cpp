//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Node{
    public:
    bool isTerminal;
    Node* child[26];
    vector<int> indexes;

    Node(){
        isTerminal = false;
        for(int i=0;i<26;i++){
            child[i] = NULL;
        }
    }
};

void add(string word, Node* trie, int index){
    int n = word.size();
    for(int i=0;i<n;i++){
      if(trie->child[word[i] - 'a'] == NULL){
        trie->child[word[i] - 'a'] = new Node();
      }
      trie = trie->child[word[i] - 'a'];
      trie->indexes.push_back(index);
    }
    trie->isTerminal = true;
}

vector<vector<string>> search_contacts(string word, Node* trie, string contact[])
{
    vector<vector<string>> results;
    int n = word.size(), i=0;
    
    for(;i<n;i++)
    {
        if(trie->child[word[i] - 'a']==NULL) break;
        trie = trie->child[word[i] - 'a'];
        vector<string>curr_matches;
        for(auto idx : trie->indexes)
        {
            curr_matches.push_back(contact[idx]);
        }
        results.push_back(curr_matches);
    }
    
    while(i<n) { results.push_back({"0"}); i++; }
            
    return results;
}

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        Node *Trie = new Node();
        
        sort(contact, contact+n);
        
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            if(!mp[contact[i]])
            {
            add(contact[i], Trie, i);
            }
            mp[contact[i]]++;
        }
        
        vector<vector<string>> results;
        results = search_contacts(s, Trie, contact);
        return results;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends