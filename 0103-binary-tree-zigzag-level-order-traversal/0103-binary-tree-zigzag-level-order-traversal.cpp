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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

       
        queue<TreeNode*>q;
        vector<vector<int>>ans;
          if(root==NULL)
        return ans;
        bool lr=true;
        q.push(root);

        while(q.size()>0)
        {
            int size=q.size();
            vector<int>v;
            for(int i=0;i<size;i++)
            {
                TreeNode*temp=q.front();
                q.pop();
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
                v.push_back(temp->val);

            }
            if(lr)
            {
                ans.push_back(v);
            }
            else
            {
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            lr=!lr;
        }
        return ans;
        
    }
};