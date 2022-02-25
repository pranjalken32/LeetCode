class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        sort(piles.begin(),piles.end());
       int n=piles.size();
        int coins=0;
        int x=0;
        for(int i= n-2;i>0;i=i-2)
        {
            
            coins+= piles[i];
            if(++x==n/3)
                return coins;
        }
        return coins;
        
    }
};