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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)
        return ans;
        queue<TreeNode*>q;
        q.push(root);
        
        while(q.size()>0)
        {
            int k=q.size();
            int x=INT_MIN;
            for(int i=0; i<k; i++)
            {
               TreeNode*temp=q.front();
               q.pop();
               x=max(x,temp->val);
               if(temp->left)
               q.push(temp->left);
               if(temp->right)
               q.push(temp->right);
            }
           ans.push_back(x);
        }
       return ans; 
    }
};