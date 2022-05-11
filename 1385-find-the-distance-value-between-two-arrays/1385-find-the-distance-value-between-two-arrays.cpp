class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        sort(arr2.begin(),arr2.end());
        for(int n : arr1)
        {
              bool flag = true;
            int i = 0;
            int j = arr2.size()-1;
            while(i<=j)
            {
                int mid = (i+j)/2;
                if(abs(arr2[mid] - n)<=d)
                {
                    flag = false;
                    break;
                }
                if(arr2[mid]<n)
                    i = mid+1;
                else
                    j = mid-1;
            }
            if(flag)
                count++;
        }
        return count;
    }
};