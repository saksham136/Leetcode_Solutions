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

    vector<vector<TreeNode*>>v;
    void lot(TreeNode* root){
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
            vector<TreeNode*>curr;

            for(int i=0;i<size;i++)
            {
                TreeNode*x=q.front();
                q.pop();
                curr.push_back(x);
                if(x->left)
                q.push(x->left);
                if(x->right)
                q.push(x->right);
            }
            v.push_back(curr);
        }
        return;
    }



    TreeNode* solve(TreeNode*root, set<TreeNode*>s,TreeNode* &res)
    {
        if(root==NULL)
        return NULL;

        if(s.find(root)!=s.end())
        return root;


      TreeNode*l=  solve(root->left,s,res);
      TreeNode*r=  solve(root->right,s,res);

      
      if(l&&r)
      {
        res=root;
        return root;
      }
      else if(l==NULL)
      return r;
      else
      return l;
    }

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        lot(root);
        TreeNode*res=new TreeNode(-1);
        vector<TreeNode*>lastlevel=v.back();
        set<TreeNode*>s(lastlevel.begin(),lastlevel.end());
        for(auto x:s)
         return solve(root,s,res);
         return res;
       
        
    }
};