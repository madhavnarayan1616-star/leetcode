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
    int minval(TreeNode* root){
        if(root==nullptr)
        return -1;
        if(root->left==nullptr)
        return root->val;
        return minval(root->left);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr)
        return nullptr;
        if(root->val==key){
            // 0child
            if(root->left==nullptr && root->right==nullptr){
            delete root;
            return nullptr;
            }
            //1 child
            if(root->left!=nullptr && root->right==nullptr){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            if(root->left==nullptr && root->right!=nullptr){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            //2 child
            if(root->left!=nullptr && root->right!=nullptr){
                int mini=minval(root->right);
                root->val=mini;
                root->right=deleteNode(root->right,mini);
            }
        }
        else if(root->val<key)
            root->right=deleteNode(root->right,key);
        else
            root->left=deleteNode(root->left,key);
        return root;
    }
};