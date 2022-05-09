/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;
        if(guess(start) == 0)
            return start;
        if(guess(end) == 0)
            return end;
        
        while(start<end)
        {
           long long int mid = start;
            mid += end;
            mid/=2;
            if(guess(mid)==0)
                return mid;
            if(guess(mid)==-1)
                end = mid;
            else
                start = mid;      
        }
        return 0;
    }
};