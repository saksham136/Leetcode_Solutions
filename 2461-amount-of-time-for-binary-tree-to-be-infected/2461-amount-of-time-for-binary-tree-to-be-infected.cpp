/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     void makegraph(unordered_map<int,vector<int>>&adj, TreeNode*curr, int p)
     {
        
        if(p!=-1)
        {
          adj[curr->val].push_back(p);
        }
        if(curr->left)
        {
            adj[curr->val].push_back(curr->left->val);
        }
         if(curr->right)
        {
            adj[curr->val].push_back(curr->right->val);
        }
        if(curr->left)
        makegraph(adj,curr->left,curr->val);
         if(curr->right)
        makegraph(adj,curr->right,curr->val);
        

     }

    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int,vector<int>>adj;
        makegraph(adj,root,-1);
       int ans=0;
         queue<int>q;
        int n=adj.size();
        set<int>visited;
           q.push(start);
          visited.insert(start);
          
        
        while(!q.empty())
        {


            int n=q.size();
            while(n--)
            {
             int x=q.front();
             q.pop();
            

            
            for(auto u:adj[x])
            {
                if(visited.find(u)==visited.end())
                {
                q.push(u);
                visited.insert(u);
                }
            }
            }
            ans++;
        }
        return ans-1;
        

    }
};