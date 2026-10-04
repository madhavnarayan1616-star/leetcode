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
    void solve(TreeNode* root, vector<int>& ans) {
        if(root == nullptr)
            return;
        solve(root->left, ans);
        ans.push_back(root->val);
        solve(root->right, ans);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        int mini = INT_MAX;
        int i = 0;
        while(i < ans.size() - 1) {
            int diff = ans[i + 1] - ans[i];
            mini = min(diff, mini);
            i++;
        }
        return mini;
    }
};