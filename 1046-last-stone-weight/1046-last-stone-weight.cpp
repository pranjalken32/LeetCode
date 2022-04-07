class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
      
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
           int n=stones.size();
            
            stones[n-2]=stones[n-1]-stones[n-2];
            stones.pop_back();
        }
        if (stones.empty())
            return 0;
        return stones[0];
    }
};


