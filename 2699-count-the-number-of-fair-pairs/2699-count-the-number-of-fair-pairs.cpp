class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int a=lower-nums[i];
            int b=upper-nums[i];

            int x=lower_bound(nums.begin()+i+1,nums.end(),a)-nums.begin();
            int y=upper_bound(nums.begin()+i+1,nums.end(),b)-nums.begin();

            ans+=(y-x);

        }
        return ans;
        
    }
};