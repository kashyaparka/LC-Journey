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
    ListNode* partition(ListNode* head, int x) 
    {
        vector<int> v;
        ListNode* cur=head;
        while(cur)
        {
            if(cur->val<x)
                v.push_back(cur->val);
            cur=cur->next;
        }
        cur=head;
        while(cur)
        {
            if(cur->val>=x)
                v.push_back(cur->val);
            cur=cur->next;
        }
        cur=head;
        int i=0;
        while(cur)
        {
           cur->val=v[i++];
           cur=cur->next;
        }
        return head;
    }
};