class Solution {
public:
   
    void dfs(unordered_map<int,vector<int>>&adj,vector<int>&visited,int u)
    {
        visited[u]=1;

        for(auto &v :adj[u])
        {
            if(!visited[v])
            dfs(adj,visited,v);
        }

    }
   




    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,vector<int>>adj;
        int n=isConnected.size();

        for(int i=0;i<n;i++)
        {
           for(int j=0;j<n;j++)
           {
            if(isConnected[i][j])
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
           }
        }

        vector<int>visited(n,0);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                 ans++;
                 dfs(adj,visited,i);
            }
            
        }
        return ans;
       
        
    }
};