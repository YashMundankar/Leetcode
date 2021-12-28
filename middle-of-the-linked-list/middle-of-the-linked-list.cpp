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
    ListNode* middleNode(ListNode* head) {
        int k=0;
        ListNode* p=head;
        while(p!=NULL){
            p=p->next;
            k++;
        }
        k=k/2;
        p=head;
        while(k--){
            p=p->next;
        }
        return p;
    }
};