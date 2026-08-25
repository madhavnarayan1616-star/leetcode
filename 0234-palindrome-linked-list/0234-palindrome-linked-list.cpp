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
    bool isPalindrome(ListNode* head) {
        ListNode* curr=head;
        int count=0;
        while(curr!=nullptr){
            count++;
            curr=curr->next;
        }
        vector<int>v(count);
        ListNode* temp=head;
        int i=0;
            while(temp!=nullptr){
            v[i]=temp->val;
            temp=temp->next;
            i++;
        }
        int s=0;
        int e=count-1;
        while(s<=e){
            if(v[s]!=v[e]){
                return false;
            }
                s++;
                e--;
          }
        return true;
        }
};