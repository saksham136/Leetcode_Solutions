class Solution {
public:


    void help(set<string>& s, int n, int ind, string& temp, string& ans) {
    if (ind == n) {
        if (s.find(temp) == s.end()) {
            ans = temp;

        }
        return;
    }

    

    temp.push_back('0');
    help(s, n, ind + 1, temp, ans);
    temp.pop_back(); // Backtrack

   

    temp.push_back('1');
    help(s, n, ind + 1, temp, ans);
    temp.pop_back(); // Backtrack
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
        help(s,n,ind,temp,ans);
        return ans;
        
    }
};