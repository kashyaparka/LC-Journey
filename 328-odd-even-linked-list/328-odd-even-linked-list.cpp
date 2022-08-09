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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(!head || !head->next) return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenhead=even;
        while(even && even->next)
        {
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        return head;
        
        
        
        
        
        
        
        
        
        // vector<int> odd,even;
        // ListNode* p=head;
        // int i=1;
        // while(p)
        // {
        //     if(i%2==1)
        //         odd.push_back(p->val);
        //     else if(i%2==0)
        //         even.push_back(p->val);
        //     i++;
        //     p=p->next;
        // }
        // p=head;
        // i=0;
        // while(p && i<odd.size())
        // {
        //     p->val=odd[i];
        //     p=p->next;
        //     i++;
        // }
        // i=0;
        // while(p && i<even.size())
        // {
        //     p->val=even[i];
        //     p=p->next;
        //     i++;
        // }
        // return head;
    }
};