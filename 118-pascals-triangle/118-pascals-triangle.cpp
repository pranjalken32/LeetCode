class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int i=1;i<=numRows;i++)
        {
            vector<int> a(i,0);
            a[0]=1;
            a[i-1]=1;
            
            if(i>2)
            {
                int j=1;
                for(int k=0;k<ans[i-2].size()-1;k++)
                {
                    a[j]=ans[i-2][k]+ans[i-2][k+1];
                    j++;
                }
            }
            
            ans.push_back(a);
        }
        return ans;
    }
};