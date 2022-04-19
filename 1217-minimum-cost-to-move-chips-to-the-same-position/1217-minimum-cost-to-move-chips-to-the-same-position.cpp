class Solution {
public:
    int minCostToMoveChips(vector<int>& pos) {
        int even = 0,odd = 0;
        
        for(auto i : pos){
            if(i % 2 == 0) even++;
            else           odd++;
        }
        return min(even,odd);
    }
};