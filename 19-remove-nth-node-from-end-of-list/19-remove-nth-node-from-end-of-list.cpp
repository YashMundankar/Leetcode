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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            c++;
            temp=temp->next;
        }
        if(n==c){
            head=head->next;
            return head;
        }
        c=c-n-1;
        temp=head;
        while(c--){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};