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
       ListNode *newHead=NULL,*p=NULL;
       int val=0;
       while(l1||l2||val){
           if(l1){
               val+=l1->val;
               l1=l1->next;
           }
           if(l2){
               val+=l2->val;
               l2=l2->next;
           }
           ListNode* newNode=new ListNode(val%10);
           if(newHead==NULL){
               newHead=newNode;
               p=newNode;
           }
           else{
               p->next=newNode;
               p=p->next;
           }
           val=val/10;
       }
        return newHead;
    }
};