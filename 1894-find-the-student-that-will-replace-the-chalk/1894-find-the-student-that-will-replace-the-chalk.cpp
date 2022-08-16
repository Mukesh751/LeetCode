class Solution {
public:
    int chalkReplacer(vector<int>& c, int k) {
       
        vector<long long> chalk(c.begin(),c.end());
        for(int i = 1; i<chalk.size(); i++)
           chalk[i] = chalk[i]+chalk[i-1];
        
        k = k%(chalk[chalk.size()-1]);
        
        int low = 0;
        int high = chalk.size()-1;
        
        while(low<=high){
            int mid = low + (high - low)/2;
            
            if(chalk[mid] == k)
                return (mid+1)%chalk.size();
            
            else if(chalk[mid]>k)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low%chalk.size();
    }
};