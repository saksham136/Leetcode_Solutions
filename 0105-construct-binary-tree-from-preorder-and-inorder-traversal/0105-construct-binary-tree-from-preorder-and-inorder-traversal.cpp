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

    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int ,int>mp;
        int n=inorder.size();
        for(int i=0;i<n;i++)
        {
            mp[inorder[i]]=i;
        }
        TreeNode* root= help(preorder, 0, n-1, inorder,0, n-1, mp);
        return root;

        
        

        
    }
    TreeNode* help(vector<int>& preorder,int prestart , int preend, vector<int>& inorder , int instart , int inend , map<int ,int>&mp ) {
       if(preend<prestart && inend<instart)
       return NULL;
         TreeNode* root=new TreeNode(preorder[prestart]);
         int x=mp[preorder[prestart]]-instart;
         int y=mp[preorder[prestart]];

         root->left=help(preorder,prestart+1, prestart+x , inorder, instart, instart+x-1,mp);
         root->right=help(preorder,prestart+x+1,preend, inorder,y+1,inend,mp );

         return root;

       




    }




};