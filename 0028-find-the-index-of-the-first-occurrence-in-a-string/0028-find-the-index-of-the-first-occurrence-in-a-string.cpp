class Solution {
public:
    int strStr(string haystack, string needle) {
        int l=needle.length();
        int flag=0;
        int m=haystack.length();
        
        for(int i=0;i<m;i++)
        {
            if(haystack.substr(i,l)==needle)
                return i;
        }
        return -1;
        
    }
};