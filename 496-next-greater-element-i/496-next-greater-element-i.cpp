class Solution {
public:
    vector<int> ngr(vector<int> nums)
    {
        vector<int> v;
        stack<int> s;
        for(int i = nums.size()-1; i>=0; i--)
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
        reverse(v.begin(),v.end());
        return v;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v = ngr(nums2);
        map<int,int> m;
        for(int i=0; i<nums2.size(); i++)
            m[nums2[i]] = i;
        vector<int> ans;
        for(int x : nums1)
          ans.push_back(v[m[x]]);
        return ans;
    }
};