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
    
     int mod=1e9+7;
     long long sum(TreeNode*root)
     {
        if(root==NULL)
        return 0;
        
        long long  x=sum(root->left);
        long long  y=sum(root->right);

        return root->val+x+y;
     }

     long long solve(TreeNode*root , long long &ans, long long ts)
     {
        if(root==NULL)
        return 0;
        
        long long x=solve(root->left,ans,ts);
        long long y=solve(root->right,ans,ts);
           
        long long curr=root->val+x+y;
        long long temp=(ts-curr)*(curr);
        ans=max(ans,temp);
        return root->val+x+y;


     }


    int maxProduct(TreeNode* root) {

        long long ts=sum(root);
        long long ans=0;
        solve(root,ans,ts);
       return ans%mod;


        
    }
};