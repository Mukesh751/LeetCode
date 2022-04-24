class UndergroundSystem {
public:
    map<int,pair<string,int>> sin;
    map<int,pair<string,int>> sout;
    map<pair<string,string>,pair<int,int>> m;
    int count=0;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
            sin[id] = make_pair(stationName, t);    
    }
    
    void checkOut(int id, string stationName, int t) {
        sout[id] = make_pair(stationName, t);
        
        m[make_pair(sin[id].first,sout[id].first)].first+=(sout[id].second - sin[id].second);
         m[make_pair(sin[id].first,sout[id].first)].second++;
    }
    
    double getAverageTime(string startStation, string endStation) {
      
        int sum = m[make_pair(startStation, endStation)].first;
        int count = m[make_pair(startStation, endStation)].second;
        
        double ans = (double)sum/count;
        return ans;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */