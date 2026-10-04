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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* curr=head;
        ListNode* prev=head;
        int count=0;
        while(curr!=nullptr){
            count++;
            curr=curr->next;
        }
        k=k%count;
        if(k==0)
        return head;
        for(int i=0; i<count-k-1; i++){
            prev=prev->next;
        }
        ListNode* newhead=prev->next;
         prev->next=nullptr;
         curr=newhead;
         while(curr->next!=nullptr){
            curr=curr->next;
         }
         curr->next=head;
         return newhead;    
    }
};