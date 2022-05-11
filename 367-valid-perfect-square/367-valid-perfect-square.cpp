class Solution {
public:
    bool isPerfectSquare(int num) {
       long long int i=1, j = num;
        while(i<=j)
        {
            long long int mid = (i+j)/2;
            if(mid*mid == num)
                return true;
            if(mid*mid > num)
                j = mid - 1;
            else
                i = mid + 1;
        }
        return false;
    }
};