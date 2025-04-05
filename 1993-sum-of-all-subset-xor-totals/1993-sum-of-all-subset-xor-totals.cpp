class Solution {
public:


    void solve(vector<int>& nums, vector<vector<int>>&ans,vector<int>v,int ind)
    {
        if(ind==nums.size())
        {
            ans.push_back(v);
            return;
        }

        solve(nums,ans,v,ind+1);
        v.push_back(nums[ind]);
        solve(nums,ans,v,ind+1);
        v.pop_back();
    }


    int subsetXORSum(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>v;
       int ind=0;

       solve(nums, ans, v, 0);

      int res=0;

       for(auto x:ans)
       {
        int curr=0;
        for(auto y:x)
        {
            curr^=y;
        }
        res+=curr;

       }
       return res;
    }
};