/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* bst(vector<int>&ans,int s,int e){
        if(s>e)
        return nullptr;
        int m=s+(e-s)/2;
        TreeNode* temp=new TreeNode(ans[m]);
        temp->left=bst(ans,s,m-1);
        temp->right=bst(ans,m+1,e);
        return temp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>ans;
        ListNode* curr=head;
        while(curr!=nullptr){
            ans.push_back(curr->val);
            curr=curr->next;
        }
        return bst(ans,0,ans.size()-1);   
    }
};