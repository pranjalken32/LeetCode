class MyCalendarThree {
public:
    map<int,int> mp;
    MyCalendarThree() {
        mp.clear();
    }
    
    int book(int start, int end) {
        
        mp[start]++;
        mp[end]--;
        
        int ret=0;
        int ans=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            ans+=it->second;
            ret=max(ret,ans);
        }
        
        return ret;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */