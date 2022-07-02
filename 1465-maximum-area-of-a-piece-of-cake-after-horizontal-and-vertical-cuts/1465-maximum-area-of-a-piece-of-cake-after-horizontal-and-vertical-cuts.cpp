class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
          int m =1e9 +7;
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        
		
        int max_h=hc[0], max_w=vc[0], i;
        
        for(i=1; i<hc.size(); ++i)
            max_h = max(max_h, hc[i]-hc[i-1]);
        max_h = max(max_h, h-hc[i-1]);
        
        for(i=1; i<vc.size(); ++i)
            max_w = max(max_w, vc[i]-vc[i-1]);
        max_w = max(max_w, w-vc[i-1]);
        return ((long long)max_h*max_w)%m;
    }
};