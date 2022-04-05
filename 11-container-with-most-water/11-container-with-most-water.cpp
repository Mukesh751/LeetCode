class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx=0;
        int n=height.size();
        int start=0;
        int end=n-1;
        while(start<end){

       if(height[start]<=height[end]){

           int temp=end - start;
           
           int temparea=temp*height[start];

           mx=max(temparea,mx);

            start++;

            }else{
           
    int temp= end - start;

           int temparea = temp* height[end];

           mx=max(temparea,mx);

           end--;
       }
    }
        return mx;
    }
};