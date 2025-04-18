class Solution {
public:


string help1(string s)
{
    int n=s.size();
    int i=0;
    int count=1;
    vector<pair<int,int>>v;
    while(i<n-1)
    {
        if(s[i]==s[i+1])
        {
           i++;
           count++;
        }
        else
        {
           v.push_back({s[i]-'0',count});
           count=1;
           i++;
        }
    }
    v.push_back({s[i]-'0',count});
    string ans="";
      for(int i=0;i<v.size();i++)
      {
       ans += to_string(v[i].second);
ans += to_string(v[i].first);


      }
      return ans;
  }

  string countAndSay(int n) {
    string result = "1";
    for (int i = 1; i < n; i++) {
      result = help1(result);
    }
    return result;
  }
};