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
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        int n=0;
        ListNode*p=head;
        while(p){
            n++;
            p=p->next;
        }
        k=k%n;

        while(k--){
            ListNode  *first=head,*second=head->next;
            while(second->next!=NULL){
                first=first->next;
                second=second->next;
            }
            second->next=head;
            head=second;
            first->next=NULL;
        }
        return head;
        
    }
};