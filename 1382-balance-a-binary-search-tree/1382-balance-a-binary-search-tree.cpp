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
    void inOrder(TreeNode* root,vector<TreeNode*>&ans){
        if(root==nullptr)
        return;
        inOrder(root->left,ans);
        ans.push_back(root);
        inOrder(root->right,ans);
    }
    TreeNode* solve(vector<TreeNode*>&ans,int s,int e){
        if(s>e)
        return nullptr;
        int mid=(s+e)/2;
        TreeNode* root=ans[mid];
        root->left=solve(ans,s,mid-1);
        root->right=solve(ans,mid+1,e);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*>ans;
        inOrder(root,ans);
        return solve(ans,0,ans.size()-1);
    }
};