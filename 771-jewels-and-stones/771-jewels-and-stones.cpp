class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
    unordered_map<char,int> m;
        int sum=0;
        for(int i=0;i<stones.length();i++)
        {
            m[stones[i]]++;
        }
        for(int i = 0; i < jewels.size(); i++){
            char ch = jewels[i];
            for(auto x: m){
                if(x.first == ch){
                    sum += x.second;
                }
            }
        }
        return sum;
    }
};