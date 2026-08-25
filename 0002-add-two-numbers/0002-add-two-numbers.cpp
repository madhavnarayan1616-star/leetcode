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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        int carry=0;
         ListNode* dummy=new  ListNode(0);
          ListNode* curr=dummy;
        while(curr1!=nullptr || curr2!=nullptr || carry!=0){
            int val1=0;
            int val2=0;
            if(curr1!=nullptr){
             val1=curr1->val;
            }
            if(curr2!=nullptr){
             val2=curr2->val;
            }
        int sum=val1+val2+carry;
        int digit=sum%10;
        carry=sum/10;
        curr->next=new ListNode(digit);
        curr=curr->next;
        if(curr1!=nullptr){
            curr1=curr1->next;
            }
        if(curr2!=nullptr){
        curr2=curr2->next;
        }
}
return dummy->next;
        }
};