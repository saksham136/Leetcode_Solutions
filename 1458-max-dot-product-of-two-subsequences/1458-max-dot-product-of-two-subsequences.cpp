class Solution {
public:

    int solve(vector<int>& nums1, vector<int>& nums2, int i,int j, vector<vector<int>>&dp)
    {
        if(i==nums1.size()|| j==nums2.size())
        return -10e8;

        if(dp[i][j]!=-1)
        return dp[i][j];

        int val = nums1[i]*nums2[j];

        int val2 = (nums1[i]*nums2[j])+solve(nums1,nums2,i+1,j+1,dp);

        int val3 =solve(nums1,nums2,i+1,j,dp);

        int val4=solve(nums1,nums2,i,j+1,dp);

        return dp[i][j]=max(val,max(val2,max(val3,val4)));
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {

        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        return solve(nums1,nums2,0,0,dp);
        
    }
};