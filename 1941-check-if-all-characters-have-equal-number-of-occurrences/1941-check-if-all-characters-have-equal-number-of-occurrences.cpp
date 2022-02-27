class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        int x= m[s[0]];
        for(int i=1;i<s.length();i++)
        {
            if(m[s[i]]!=x)
                return false;
        }
        return true;
    }
};