class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(int n : arr1)
        {
            bool flag = true;
            for(int x : arr2)
            {
                if(abs(x-n)<=d)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                count++;
        }
        return count;
    }
};