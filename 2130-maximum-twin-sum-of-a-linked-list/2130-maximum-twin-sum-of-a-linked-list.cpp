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
    int pairSum(ListNode* head) {
        if(head==NULL) return 0;
        int n=0,i=0;
        ListNode* p=head;
        while(p){
            n++;
            p=p->next;
        }
        stack<int>st;
        p=head;
        while(i<n/2){
            st.push(p->val);
            p=p->next;
            i++;
        }
        int mx=INT_MIN;
         while(i<n){
            int v=st.top()+p->val;
             mx=max(mx,v);
            p=p->next;
             st.pop();i++;
        }
        return mx;
    }
};