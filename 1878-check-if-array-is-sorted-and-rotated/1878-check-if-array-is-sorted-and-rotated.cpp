class Solution {
public:
    bool check(vector<int>& nums) {
        int x=0;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
           if(nums[i]<nums[i-1] )
           x++;
        }
        if(nums[n-1]>nums[0])
        x++;
        return x<=1;
    }
};