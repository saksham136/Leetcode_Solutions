class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        vector<int>v(26,0);
        for(int i=0; i<n;i++)
        {
            v[word[i]-'a']++;
        }
        int ans=0;
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<26;i++)
        {
            if(i<8)
            {
                ans+=(v[i]*1);
            }
            else if ( i<16)
            {
                ans+=(v[i]*2);
            }
            else if(i<24)
            {
                ans+=(v[i]*3);
            }
            else
            {
                ans+=(v[i]*4);
            }
        }
        return ans;
        
    }
};