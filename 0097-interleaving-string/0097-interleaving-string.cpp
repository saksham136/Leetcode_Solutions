class Solution {
public:
    unordered_map<string, bool> dp;

    bool solve(string& s1, string& s2, string& s3, int i, int j, int k) {
        if (k == s3.size()) {
            return i == s1.size() && j == s2.size();
        }

        string key = to_string(i) + "," + to_string(j);  // memoization key

        if (dp.find(key) != dp.end())
            return dp[key];

        bool firstMatch = false, secondMatch = false;

        if (i < s1.size() && s1[i] == s3[k])
            firstMatch = solve(s1, s2, s3, i + 1, j, k + 1);

        if (j < s2.size() && s2[j] == s3[k])
            secondMatch = solve(s1, s2, s3, i, j + 1, k + 1);

        return dp[key] = (firstMatch || secondMatch);
    }

    bool isInterleave(string s1, string s2, string s3) {
        if (s1.size() + s2.size() != s3.size())
            return false;

        return solve(s1, s2, s3, 0, 0, 0);
    }
};
