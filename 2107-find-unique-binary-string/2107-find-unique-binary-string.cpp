class Solution {
public:


    bool help(set<string>& s, int n, int ind, string temp, string& ans) {
    if (ind == n) {
        if (s.find(temp) == s.end()) {
            ans = temp;
            return true;

        }
        return false;
    }

    

    if(help(s, n, ind + 1, temp+"0", ans))
    return true;
 

   

    
    if(help(s, n, ind + 1, temp+"1", ans))
    return true;

    return false;

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