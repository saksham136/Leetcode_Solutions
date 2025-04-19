class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& pre) {
        unordered_map<int , vector<int>> mp;
        vector<int> indegree(num, 0);

        for (int i = 0; i < pre.size(); i++) {
            int u = pre[i][0];
            int v = pre[i][1];
            mp[v].push_back(u); // edge from v to u (u depends on v)
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

        int count = 0;
        while (!q.empty()) {
            int a = q.front();
            q.pop();
            count++; // increment here for every node processed

            for (auto x : mp[a]) {
                indegree[x]--;
                if (indegree[x] == 0) {
                    q.push(x);
                }
            }
        }

        return count == num;
    }
};
