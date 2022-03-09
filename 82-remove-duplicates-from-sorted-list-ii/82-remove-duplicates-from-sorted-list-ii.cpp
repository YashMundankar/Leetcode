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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int>m1;
        ListNode* p=head;
        while(p){
        m1[p->val]++;    
        p=p->next;
        }
        
        ListNode* newHead=NULL;
        for(auto i : m1){
           if(i.second==1){
                ListNode* newNode =new ListNode(i.first);
            if(newHead==NULL){
                newHead=newNode;
                p=newHead;
            }
            else{
                p->next= newNode;
                p=p->next;
            }
           }
        }
        return newHead;
       
    }
};