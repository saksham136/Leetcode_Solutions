class Solution {
public:


    bool checkbip(vector<vector<int>>& graph, vector<int>&color, int curr, int currcol)
    {
        color[curr]=currcol;

        for(auto &v:graph[curr])
        {
           if(color[v]==currcol)
           return false;

           if(color[v]==-1)
           {
              int col=1-currcol;
              if( checkbip(graph,color,v,col)==false)
              return false;

           }
          
        }
         return true;

}

    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);

        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
               if( checkbip(graph,color,i,0)==false)
               return false;
            }

        }
        return true;
        
     }
};