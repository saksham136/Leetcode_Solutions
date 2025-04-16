class Solution {
public:
    long long countGood(vector<int>& nums, int k) {

        unordered_map<int,int>mp;
        int i=0;
        int j=0;

        int n=nums.size();
        int pairs=0;
        long long  ans=0;

        while(j<n)
        {
        
            pairs+=mp[nums[j]];
            mp[nums[j]]++;

            while( pairs>=k ){
                    ans+=(n-j);
                    mp[nums[i]]--;
            pairs -= mp[nums[i]];  
            i++;

                
            }
            j++;

        }
        return ans;
        
    }
};