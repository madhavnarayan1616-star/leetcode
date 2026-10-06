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
    void solve(TreeNode* root, vector<int>&in){
        if(root==nullptr)
        return;
        solve(root->left,in);
        in.push_back(root->val);
        solve(root->right,in);
    }
    vector<int> mergesort(vector<int>&v1,vector<int>&v2){
        vector<int>ans;
        int i=0;
        int j=0;
        while(i<v1.size() && j<v2.size()){
        if(v1[i]>v2[j]){
            ans.push_back(v2[j]);
            j++;
        }
        else{
            ans.push_back(v1[i]);
            i++;
        }
        }
        while(i<v1.size()){
            ans.push_back(v1[i]);
            i++;
        }
        while(j<v2.size()){
            ans.push_back(v2[j]);
            j++;
        }
        return ans;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> bst1;
        vector<int> bst2;
        solve(root1,bst1);
        solve(root2,bst2);
        return mergesort(bst1,bst2);
    }
};