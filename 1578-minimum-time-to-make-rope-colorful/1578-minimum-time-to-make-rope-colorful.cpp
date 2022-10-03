class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int totaltime = 0;
        
        int timeacc = 0;
        for(int i = 0;i<n;i++){
            totaltime += neededTime[i];
            int maxi = neededTime[i];
            while(i+1<n && colors[i+1]==colors[i]){
                maxi = max(maxi,neededTime[i+1]);
                totaltime += neededTime[i+1];
                i++;
            }
            timeacc += maxi;
        }
        return totaltime-timeacc;
    }
};