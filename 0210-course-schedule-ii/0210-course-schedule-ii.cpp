class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& pre) {
        
        unordered_map<int , vector<int>> mp;
        vector<int> indegree(num, 0);
        vector<int>ans;
        vector<int>v;

        for (int i = 0; i < pre.size(); i++) {
            int u = pre[i][0];
            int v = pre[i][1];
            mp[v].push_back(u); 
        }

        for (int i = 0; i < num; i++) {
            for (auto u : mp[i]) {
                indegree[u]++;
            }
        }
        
        queue<int> q;
        for (int i = 0; i < num; i++) {
            if (indegree[i] == 0)
                q.push(i);
        }

    int count=0;
        while (!q.empty()) {
            int a = q.front();
            q.pop();
            ans.push_back(a);
           count++;
            for (auto x : mp[a]) {
                indegree[x]--;
                if (indegree[x] == 0) {
                    q.push(x);
                }
            }
        }
        if (count<num)
        return v;
        return ans;
    }
};