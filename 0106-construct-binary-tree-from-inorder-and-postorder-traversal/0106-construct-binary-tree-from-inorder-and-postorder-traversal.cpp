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
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder,int &index,int istart,int iend,unordered_map<int,int>&mp){
        if(index<0 || istart>iend)
        return nullptr;
        int element=postorder[index--];
        TreeNode* root=new TreeNode(element);
        int rpos=mp[element];
        //recursive call
        root->right=solve(inorder,postorder,index,rpos+1,iend,mp);
        root->left=solve(inorder,postorder,index,istart,rpos-1,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        int index=n-1;
        unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[inorder[i]]=i;
    }
        return solve(inorder,postorder,index,0,n-1,mp);
    }
};