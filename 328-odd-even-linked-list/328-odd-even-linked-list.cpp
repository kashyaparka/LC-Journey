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
        vector<int> odd,even;
        ListNode* p=head;
        int i=1;
        while(p)
        {
            if(i%2==1)
                odd.push_back(p->val);
            else if(i%2==0)
                even.push_back(p->val);
            i++;
            p=p->next;
        }
        p=head;
        i=0;
        while(p && i<odd.size())
        {
            p->val=odd[i];
            p=p->next;
            i++;
        }
        i=0;
        while(p && i<even.size())
        {
            p->val=even[i];
            p=p->next;
            i++;
        }
        return head;
    }
};