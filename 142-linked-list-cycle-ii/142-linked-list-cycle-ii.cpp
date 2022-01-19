/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
       ListNode* fast=head;
       ListNode* slow=head;
       while(fast && fast->next)
       {
           fast=fast->next->next;
           slow=slow->next;
           if(fast==slow)
           {
           //    fast=head;
               while(head!=slow)
               {
                    // if(fast==slow)
                    // {
                    //    if(fast==head)
                    //       return slow;
                    //    else
                    //       return slow->next;
                    // }
                   head=head->next;
                   slow=slow->next;
               }
               return head;
           }
       }
       return NULL;
    
    }
};