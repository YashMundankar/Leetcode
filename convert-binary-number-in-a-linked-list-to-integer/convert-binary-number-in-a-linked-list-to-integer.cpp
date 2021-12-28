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
    int power=0;
    int num=0;
    void func(ListNode *head){
        if(head==NULL){
            return;
        }
        func(head->next);
        num=num+(head->val*pow(2,power));
        power++;
    }
    int getDecimalValue(ListNode * head) {
        func(head);
        return num;
    }
};