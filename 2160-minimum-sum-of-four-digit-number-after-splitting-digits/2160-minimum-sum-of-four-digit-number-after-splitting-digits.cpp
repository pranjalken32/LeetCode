class Solution {
public:
    int minimumSum(int num) {
      string s = to_string(num);
        //converting to the string will be easier in these cases 
        //we can see that
        sort(s.begin(), s.end());
        int ans=(s[0]-'0'+s[1]-'0')*10+(s[2]-'0')+(s[3]-'0');
        return ans;
    }
};