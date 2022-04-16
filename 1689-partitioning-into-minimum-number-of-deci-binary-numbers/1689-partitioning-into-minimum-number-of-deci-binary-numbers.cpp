class Solution {
public:
    int minPartitions(string n) {
        int s=n.size()-1;
        sort(n.begin(),n.end());
       
        return n[s]-'0';
    }
};