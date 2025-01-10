class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>ans;

        int n1=words1.size();
        int n2=words2.size();

       vector<int>mx(26,0);
        for(int i=0;i<n2;i++)
        {
            vector<int>v(26,0);
            string s=words2[i];
            for(auto x:s)
            {
               
               v[x-'a']++;
               mx[x-'a']=max(v[x-'a'],mx[x-'a']);
            }

        }

        for(auto d:mx)
        cout<<d<<" ";

     
        for(int i=0;i<n1;i++)
        {
             vector<int>n(26,0);
            string s2=words1[i];
            for(auto y:s2)
            {
                n[y-'a']++;
            }

            if(check(mx,n))
            ans.push_back(s2);

       }
    return ans;
    }

    bool check(vector<int>a , vector<int>b)
    {
        for(int i=0;i<26;i++)
        {
            if(b[i]<a[i])
            return false;
        }
        return true;
    }
};