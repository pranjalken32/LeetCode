class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(int i=0;i<t.length();i++)
        {
            if(s[j]==t[i])
                j++;
        }
        
        if(s.length()==j)
            return true;
        else
            return false;
        
    }
};