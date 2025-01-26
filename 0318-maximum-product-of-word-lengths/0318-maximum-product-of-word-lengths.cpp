class Solution {
public:

   bool check(bitset<26>a , bitset<26>b)
   {
      for(int i=0;i<26;i++)
      {
        if(a[i]&&b[i])
        return true;
      }
      return false;
   }
     
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<bitset<26>>v(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
             string s=words[i];
            for(int k=0;k<s.size();k++)
            {
                v[i][s[k]-'a']=1;
            }
            for(int j=0;j<i;j++)
            {
                if(!check(v[i],v[j]))
                {
                int n1=words[i].size();
                int n2=words[j].size();
                ans=max(ans,(n1*n2));
                }
            }

        }
        return ans;
        
        
    }
};