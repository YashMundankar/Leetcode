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
    ListNode* sortList(ListNode* head) {
        ListNode* p=head;
        vector<int>v1;
        while(p!=NULL){
            v1.push_back(p->val);
            p=p->next;
        }
        sort(v1.begin(),v1.end());
        p=head;
        for(auto i: v1){
            p->val=i;
            p=p->next;
        }
        return head;
        
    }
};