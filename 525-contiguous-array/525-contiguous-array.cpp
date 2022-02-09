class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> map;
        map[0] = -1;
        int count = 0, mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            
            if (nums[i])    
                count++;  
            else    
                count--;
            
            if (map.count(count))  
                mx = max(mx, i - map[count]);
            else    
                map[count] = i;
        }
        
        return mx;
    }
};