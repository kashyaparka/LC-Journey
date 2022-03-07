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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
         ListNode* last = new ListNode(-1);
       ListNode* fake = last; 
       ListNode* ptr1 = l1;
       ListNode* ptr2 = l2;
       while(ptr1 != nullptr && ptr2 != nullptr){
        if(ptr1->val <= ptr2->val){
            last->next = ptr1;
            ptr1 = ptr1->next;
        }
        else {
            last->next = ptr2;
            ptr2 =ptr2->next;
        }
           last=last->next;
       }
     if(ptr1 ==NULL)
         last->next=ptr2;
     if(ptr2==NULL)
         last->next=ptr1;
    
    return fake->next;
        
    }
};