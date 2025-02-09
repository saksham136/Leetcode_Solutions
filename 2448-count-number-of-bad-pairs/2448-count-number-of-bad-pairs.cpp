class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
     long long ans=0;
     int n=nums.size();
     map<int,int>mp;
     for(int i=0;i<n;i++)
     {
        nums[i]-=i;
     }
     mp[nums[0]]=1;
     for(int i=1;i<n;i++)
     {
        if(mp.find(nums[i])==mp.end())
        {
            ans+=i;
        }
        else
        {
            ans+=(i-mp[nums[i]]);
           
        }
        mp[nums[i]]++;

     }
     return ans;

        
    }
};