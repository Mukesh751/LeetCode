class node{
private:
    node* links[26];
    bool flag=false;
public:
    bool containsKey(char c) {
        if(links[c-'a']) return true;
        return false;
    }
    
    void putKey(char c, node* cur) {
        links[c-'a']=cur;
    }
    
    node* getLink(char c) {
        return links[c-'a'];
    }
    
    void setEnd() {
        flag=true;
    }
    
    bool isEnd() {
        return flag;
    }
};

class Trie {
    node *root;
public:
    Trie() {
        root= new node();
    }
    
    void insert(string word) {
        node* cur=root;
        
        for(int i=0; i<word.length(); i++) {
            if(!cur->containsKey(word[i])) {
                cur->putKey(word[i], new node());
            }
            cur=cur->getLink(word[i]);
        }
        cur->setEnd();
    }
    
    bool search(string word) {
        node* cur=root;
        
        for(int i=0; i<word.length(); i++) {
            if(!cur->containsKey(word[i])) return false;
            cur=cur->getLink(word[i]);
        }
        
        return cur->isEnd();
    }
    
    bool startsWith(string prefix) {
        node* cur=root;
        
        for(int i=0; i<prefix.length(); i++) {
            if(!cur->containsKey(prefix[i])) return false;
            cur=cur->getLink(prefix[i]);
        }
        
        return true;
    }
};


/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */