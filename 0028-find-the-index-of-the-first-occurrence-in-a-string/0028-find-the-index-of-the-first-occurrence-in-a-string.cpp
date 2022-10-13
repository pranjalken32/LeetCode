class Solution {
public:
    int strStr(string haystack, string needle) {
        int l=needle.length();
        int flag=0;
        int m=haystack.length();
        string x="";
        for(int i=0;i<m;i++)
        {
            x=haystack.substr(i,l);
            if(x==needle)
                return i;
        }
        return -1;
        
    }
};