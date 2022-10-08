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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*p=head;
        ListNode* q=head;
        int t=k-1;
        while(t--) p=p->next;
        
        int size=0;
        while(q)
        {
            size++;
            q=q->next;
        }
        t=size-k;
        q=head;
        while(t--){
            q=q->next;
        }
        cout<<p->val<<" "<<q->val;
        swap(p->val,q->val);
        return head;
    }
};