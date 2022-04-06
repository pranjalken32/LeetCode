class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size()==0)
            return 0;
        int maxprofit=0;
        int buy=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            maxprofit=max(maxprofit,(prices[i]-buy));
            if(buy>prices[i])
                buy=prices[i];
        }
        return maxprofit;
        
    }
};

        
