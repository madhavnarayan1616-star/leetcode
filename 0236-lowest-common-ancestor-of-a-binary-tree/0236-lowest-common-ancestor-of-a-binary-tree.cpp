/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         if(root==nullptr)
        return nullptr;
        if(root->val==p->val || root->val==q->val)
        return root;
        TreeNode* ansleft=lowestCommonAncestor(root->left,p,q);
        TreeNode* ansright=lowestCommonAncestor(root->right,p,q);
        if(ansleft!=nullptr && ansright!=nullptr)
        return root;
        else if(ansleft!=nullptr && ansright==nullptr)
        return ansleft;
        else if(ansleft==nullptr && ansright!=nullptr)
        return ansright;
        else
        return nullptr;
    }
};