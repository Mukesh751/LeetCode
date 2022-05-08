/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    int i = 0;
    vector<int> flist;

    void recurse(vector<NestedInteger> nestedList)
    {
           for(int k=0; k<nestedList.size(); k++)
          {
              if(nestedList[k].isInteger())
                  flist.push_back(nestedList[k].getInteger());
              else
                  recurse(nestedList[k].getList());
          }
    
    }
    
    NestedIterator(vector<NestedInteger> &nestedList) {
       cout<<nestedList.size();
        recurse(nestedList);
    }
    
    int next() {
        int ans = flist[i];
           i++;
        return ans;
    }
    
    bool hasNext() {
       if(i == flist.size())
           return false;
        return true;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */