class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
         int i = 0, j = 0, k = 0;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int arr3[2000];
    while (i<n1 && j <n2)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
 
    while (i < n1)
        arr3[k++] = arr1[i++];
        
    while (j < n2)
        arr3[k++] = arr2[j++];
        
        int x = n1+n2;
        double ans;
        if(x%2==0)
        {
            ans = arr3[x/2] + arr3[(x-2)/2];
            ans = ans/2;
        }
        else
            ans=arr3[(x)/2];
        
        return ans;
    }
};