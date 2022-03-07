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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* p=head;
        p=p->next;
        int val=0;
        ListNode* newHead=NULL;
        ListNode* newTemp=NULL;
        while(p){
            val+=p->val;
            if(p->val==0){
                ListNode* newNode=new ListNode(val);
                if(newHead==NULL) {
                    newHead= newNode;
                    newTemp=newHead;
                }
                else{
                    newTemp->next=newNode;
                    newTemp=newTemp->next;
                }
                val=0;
                }
            
            
            p=p->next;
        }
        return newHead;
        
    }
};