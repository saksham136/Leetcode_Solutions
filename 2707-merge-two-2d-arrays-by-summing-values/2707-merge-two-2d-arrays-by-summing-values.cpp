class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>mp;
        for(int i=0;i<nums1.size();i++)
        {
            vector<int>v1=nums1[i];
            mp[v1[0]]+=v1[1];
        }
         for(int i=0;i<nums2.size();i++)
        {
            vector<int>v2=nums2[i];
            mp[v2[0]]+=v2[1];
        }
        vector<vector<int>>ans;
        for(auto x :mp)
        {
            vector<int>v;
            v.push_back(x.first);
            v.push_back(x.second);
            ans.push_back(v);
        }
        return ans;
        
    }
};