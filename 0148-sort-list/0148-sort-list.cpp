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
class Solution {
public:
    ListNode* merge(ListNode* right,ListNode* left){
        ListNode* curr1=left;
        ListNode* curr2=right;
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;
        while(curr1!=nullptr && curr2!=nullptr){
            if(curr1->val<=curr2->val){
                curr->next=curr1;
                curr1=curr1->next;
            }
            else{
                curr->next=curr2;
                curr2=curr2->next;

            }
            curr=curr->next;
            }
            if(curr1!=nullptr){
                curr->next=curr1;
            }
            if(curr2!=nullptr){
                curr->next=curr2;
            }
        return dummy->next;

    }
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* left=head;
        ListNode* right=slow->next;
        slow->next=nullptr;
        left = sortList(left);
        right = sortList(right);
        return merge(right,left);
     }
};