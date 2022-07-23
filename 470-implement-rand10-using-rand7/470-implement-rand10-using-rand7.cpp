// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
         vector<vector<int>> vals = {
        { 1, 2, 3, 4, 5, 6, 7 },
        { 8, 9, 10, 1, 2, 3, 4 },
        { 5, 6, 7, 8, 9, 10, 1}, 
        { 2, 3, 4, 5, 6, 7, 8}, 
        { 9, 10, 1, 2, 3, 4, 5}, 
        { 6, 7, 8, 9, 10, 0, 0}, 
        { 0, 0, 0, 0, 0, 0, 0}
    };
        int i = 0; 
        while(i == 0) { 
            i = vals[rand7()-1][rand7()-1];
        }
        
        return i;
    }
};