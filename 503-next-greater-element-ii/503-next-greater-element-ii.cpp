class Solution {
public:
            vector<int> ngl(vector<int> nums)
    {
        vector<int> v;
        stack<int> s;
        for(int i = 0; i<nums.size(); i++)
        {
            if(s.size() == 0)
            {
                v.push_back(-1);
                s.push(nums[i]);
            }
            else if(s.size()>0 && s.top()>nums[i])
            {
                v.push_back(s.top());
                s.push(nums[i]);
            }
            else
            {
                while(s.size()>0 && s.top()<nums[i])
                    s.pop();
                
                 if(s.size() == 0)
                {
                v.push_back(-1);
                s.push(nums[i]);
                }
                else
                {
                v.push_back(s.top());
                s.push(nums[i]);
                }
            }
        }
        return v;
    }
        vector<int> ngr(vector<int> nums)
    {
        vector<int> v;
        stack<int> s;
        for(int i = nums.size()-1; i>=0; i--)
        {
            if(s.size() == 0)
            {
                v.push_back(INT_MIN);
                s.push(nums[i]);
            }
            else if(s.size()>0 && s.top()>nums[i])
            {
                v.push_back(s.top());
                s.push(nums[i]);
            }
            else
            {
                while(s.size()>0 && s.top()<=nums[i])
                    s.pop();
                
                 if(s.size() == 0)
                {
                v.push_back(INT_MIN);
                s.push(nums[i]);
                }
                else
                {
                v.push_back(s.top());
                s.push(nums[i]);
                }
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
    void debug(vector<int> v){
        for(auto x : v)
            cout<<x<<" ";
        cout<<endl;
    }
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans1 = ngl(nums);
        vector<int> ans2 = ngr(nums);
        
        vector<int> ans3(nums.begin(),nums.end());
        for(auto x: nums)
        ans3.push_back(x);
        debug(ans3);
        ans3 = ngr(ans3);
        
        debug(ans1);
        debug(ans2);
        debug(ans3);
        vector<int> ans;
        //ans.push_back(ans1[0]);
        for(int i=0; i<ans1.size(); i++){
            ans.push_back(max(ans2[i],ans3[i]));
            if(ans[i] == INT_MIN)
                ans[i] = -1;
        }
        return ans;
    }
};