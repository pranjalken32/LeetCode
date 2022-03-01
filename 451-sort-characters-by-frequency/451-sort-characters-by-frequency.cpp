class Solution {
public:
string frequencySort(string s) {
unordered_map<char,int> m;
string ans="";
int i;
for(i=0;i<s.length();i++)
{
m[s[i]]++;
}
priority_queue<pair<int,char>> q;
for(auto e:m)
{
q.push({e.second,e.first});
}
while(q.size()!=0)
{
pair<int,char> t=q.top();
q.pop();
while(t.first--)
{
ans+=t.second;
}
}
return ans;

}
};