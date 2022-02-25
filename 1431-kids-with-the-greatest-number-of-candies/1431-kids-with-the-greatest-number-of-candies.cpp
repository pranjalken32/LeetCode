class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>x;
        int max=*max_element(candies.begin(),candies.end());
        
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max)
                x.push_back(true);
        
        else
        {
            x.push_back(false);
        }
    }
    return x;
        
        
    }
};