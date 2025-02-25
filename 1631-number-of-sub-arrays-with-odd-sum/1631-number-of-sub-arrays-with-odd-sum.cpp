class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        vector<int>pre;
        int n=arr.size();
        int x=0;
        int oc=0;
        int ec=1;
        int ans=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            x+=arr[i];
            if(x%2==0)
            {
                ans+=oc;
                ans=ans%mod;
                ec++;
            }
            else
            {
                ans+=ec;
                ans=ans%mod;
                oc++;
            }

        }
        return ans;
        
    }
};