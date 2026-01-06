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

    int maxLevelSum(TreeNode* root) {
        int ans=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        int lvl=0;
        int res=0;
        while(!q.empty())
        {
            int size=q.size();
            int sum=0;
            for(int i=0;i<size;i++)
            {
                TreeNode*curr=q.front();
                q.pop();
                sum+=curr->val;

                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                  {
                    q.push(curr->right);
                  }
            }
            lvl++;
            if(sum>ans)
            {
                ans=max(ans,sum);
                res=lvl;

            }
        }
        return res;


        
    }
};