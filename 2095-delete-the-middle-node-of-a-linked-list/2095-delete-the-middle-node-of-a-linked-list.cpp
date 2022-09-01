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
    ListNode* deleteMiddle(ListNode* head) 
    {
        int size=0;
        ListNode* p=head;
        while(p)
        {
            size++;
            p=p->next;
        }
        if(size==1) return NULL;
        p=head;
        size=size/2-1;
        while(size--)
        {
            p=p->next;
        }
        ListNode* t=p->next->next;
        p->next=t;
        return head;
    }
};