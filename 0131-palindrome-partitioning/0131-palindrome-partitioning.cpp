class Solution {
public:
     bool isp(string sa)
     {
        int n=sa.size();
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            if(sa[i]!=sa[j])
            return false;
            i++;
            j--;
        }
        return true;
     }

    void solve(string s,vector<vector<string>>&ans,vector<string>&v,int ind,int n)
    {
        if(ind==n)
        {
            ans.push_back(v);
            return;
        }
        for(int i=ind;i<n;i++)
        {
            string st=s.substr(ind,i-ind+1);
            if(isp(st))
            {
                v.push_back(st);
                solve(s,ans,v,i+1,n);
                v.pop_back();
            }

        }


    }


    vector<vector<string>> partition(string s) {
    vector<vector<string>>ans;
    vector<string>v;
    int ind=0;
    int n=s.size();
    solve(s,ans,v,ind,n);
    return ans;

        
    }
};