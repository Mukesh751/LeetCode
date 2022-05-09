// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    
    int firstBadVersion(int n) {
        
       int start = 1;
        int end = n;
        if(isBadVersion(start))
            return start;
    if(isBadVersion(end) && !isBadVersion(end-1))
            return end;
        while(start<end)
        {
            long long int mid = start;
            mid += end;
            mid/=2;
            if(isBadVersion(mid) && !isBadVersion(mid-1))
                return mid;
            if(isBadVersion(mid))
                end = mid;
            else
                start = mid;
        }
        return 0;
    }
    
};