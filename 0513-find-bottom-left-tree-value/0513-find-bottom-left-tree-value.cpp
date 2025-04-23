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
    int findBottomLeftValue(TreeNode* root) {
         vector<int>v;
        queue<TreeNode*>q;
        q.push(root);
       
       int ans=0;
           while(!q.empty())
        {
            int size=q.size();
             TreeNode*x;
            
             
            for(int i=0;i<size;i++)
            {
                x=q.front();
                q.pop();
                  if (i == 0) {
                    ans = x->val;
                }
                v.push_back(x->val);
                if(x->left!=NULL)
                q.push(x->left);
                if(x->right)
                q.push(x->right);

             }
            
        }
         return ans;
        
    }
      
};