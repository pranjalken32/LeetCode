class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>x;
        int n=candyType.size()/2;
        for(int i=0;i<candyType.size();i++)
        {
            x.insert(candyType[i]);
        }
        if(x.size()>=n)
            return n;
        else
            return x.size();
    }
};