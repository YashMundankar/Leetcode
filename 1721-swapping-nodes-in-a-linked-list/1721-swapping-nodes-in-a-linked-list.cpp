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
    ListNode* swapNodes(ListNode* head, int k) 
    {
     int n=0;
     ListNode* p=head;
        while(p){
            n++;
            p=p->next;
        }
        //cout<<n<<endl;
        int nn=n;
        //if(nn==1) return head;
        ListNode* n1=NULL;
        ListNode* n2=NULL;
        p=head;
        n=0;
        while(p){
            n++;
            if(n==k){
                n1=p;
            }
             if(n==nn-k+1) n2=p;
            p=p->next;
            
        }
        int temp=n1->val;
        n1->val=n2->val;
        n2->val=temp;
        return head;
    }
};