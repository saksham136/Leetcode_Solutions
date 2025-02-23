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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
     map<int ,int>mp;
        int n=inorder.size();
        for(int i=0;i<n;i++)
        {
            mp[inorder[i]]=i;
        }
        TreeNode* root= help(postorder, 0, n-1, inorder,0, n-1, mp);
        return root;

        
        

        
    }
    TreeNode* help(vector<int>& postorder,int poststart , int postend, vector<int>& inorder , int instart , int inend , map<int ,int>&mp ) {
       if(postend<poststart && inend<instart)
       return NULL;
         TreeNode* root=new TreeNode(postorder[postend]);


         int x=inend-mp[postorder[postend]];
         int y=mp[postorder[postend]];

         root->right=help(postorder,postend-x,postend-1, inorder, y+1,inend,mp);
         root->left=help(postorder,poststart,postend-x-1, inorder,instart,y-1,mp );

         return root;

       




    }

};