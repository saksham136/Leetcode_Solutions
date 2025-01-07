class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        set<string>s;
        vector<string>v;
        for(int i=0; i<n;i++)
        {
            string s1=words[i];

            for(int j=0;j<n;j++)
            {
                if(i==j)
                continue;
                
                string s2=words[j];
                if(sbtr(s1,s2))
                s.insert(s2);

            }
           
        }
        for(auto x:s)
        v.push_back(x);
         return v;

        
    }

    bool sbtr(string mainString, string subString) {
    int n = mainString.size();
    int m = subString.size();

    // Iterate through each possible starting position in the main string
    for (int i = 0; i <= n - m; i++) {
        bool match = true;

        // Check if the substring matches at this position
        for (int j = 0; j < m; j++) {
            if (mainString[i + j] != subString[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            return true; // Substring found
        }
    }

    return false; // Substring not found
}
};