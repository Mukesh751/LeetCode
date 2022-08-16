class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int low = 0;
        int high = arr.size()-k;
        int mid;
        
        while(low<high){
             mid = low + (high - low)/2;
            
             if (x - arr[mid] <= arr[mid + k] - x)
           high = mid;
         else
           low = mid + 1;
        }
        return vector<int>(arr.begin()+low, arr.begin()+low+k);
    }
};