class Solution {
public:


    bool help(set<string>& s, int n, int ind, string& temp, string& ans) {
    if (ind == n) {
        if (s.find(temp) == s.end()) {
            ans = temp;
            return true;

        }
        return false;
    }

    

    temp.push_back('0');
    if(help(s, n, ind + 1, temp, ans))
    return true;
    temp.pop_back(); // Backtrack

   

    temp.push_back('1');
    if(help(s, n, ind + 1, temp, ans))
    return true;
    temp.pop_back();

    return false;
     // Backtrack
}



    string findDifferentBinaryString(vector<string>& nums) {
        set<string>s;
        string temp="";
        string ans="";
        int n=nums.size();
       int ind=0;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
       bool x= help(s,n,ind,temp,ans);
        return ans;
        
    }
};