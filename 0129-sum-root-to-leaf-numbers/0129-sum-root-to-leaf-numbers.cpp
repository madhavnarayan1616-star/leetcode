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
    void solve(TreeNode* root,vector<int>&path ,vector<int>&ans){
        if(root==nullptr)
        return;
        path.push_back(root->val);
        if(root->left==nullptr && root->right==nullptr){
            int sum=0;
        for(int i=0; i<path.size(); i++){
            sum=sum*10+path[i];
        }
        ans.push_back(sum);
        }
        solve(root->left,path,ans);
        solve(root->right,path,ans);
        path.pop_back();    
    }
    int sumNumbers(TreeNode* root) {
        vector<int>path;
        vector<int>ans;
        solve(root,path,ans);
        int sum=0;
        for(int i=0; i<ans.size(); i++){
            sum=sum+ans[i];
        }
        return sum;
    }
};