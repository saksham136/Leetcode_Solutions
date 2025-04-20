class Solution {
public:
    int numRabbits(vector<int>& ans) {
        unordered_map<int,int>mp;
        for(int i=0;i<ans.size();i++)
        mp[ans[i]]++;

        int res=0;

        for(auto x:mp)
        {
            int grp=ceil((double)x.second/(x.first+1));
            res+=(grp*(x.first+1));
        }
        return res;
        
    }
};