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
    ListNode* middleNode(ListNode* head) {
        ListNode *t = head;
        int size=0;
        while(t!=nullptr)
        {
            t=t->next;
            size++;
        }
        t=head;
        size = size/2;
        while(t !=nullptr && size-- !=0)
        {
            t=t->next;
        }
        return t;
    }
};