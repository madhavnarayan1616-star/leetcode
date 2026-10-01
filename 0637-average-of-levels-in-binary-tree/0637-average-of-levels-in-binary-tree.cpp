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
    void solve(TreeNode* root,vector<long long>&sum,int level,vector<int>&count){
        if(root==nullptr)
        return ;
        if(level==sum.size()){
        sum.push_back(root->val);
        count.push_back(1);
        }
        else{
            count[level]++;
            sum[level]+=root->val;
        }
        solve(root->left,sum,level+1,count);
        solve(root->right,sum,level+1,count);   
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        int level=0;
        vector<long long>sum;
        vector<int>count;
        solve(root,sum,level,count);
        for(int i=0; i<sum.size(); i++){
            ans.push_back((double)sum[i]/count[i]);
        }
        return ans;
    }
};