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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        vector<int> v;
        ListNode* cur=head;
        int level=1;
        while(cur)
        {
            if(level>=left && level<=right)
                v.push_back(cur->val);
            cur=cur->next;
            level++;
        }
        reverse(v.begin(),v.end());
        cur=head;
        level=1;
        int i=0;
        while(cur)
        {
            if(level>=left && level<=right)
                 cur->val=v[i++];
            cur=cur->next;
            level++;
        }
        return head;
    }
};