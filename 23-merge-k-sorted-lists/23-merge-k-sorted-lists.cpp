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
    ListNode* newNode(int key, ListNode* next)
    {
    // allocate a new node in a heap and set its data
    ListNode* node = new ListNode;
    node->val = key;
 
    // set the `.next` pointer of the new node to point to the current
    // first node of the list.
    node->next = next;
 
    return node;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        if(lists.size()==0)
            return nullptr;
        vector<int> v;
        for(auto it : lists)
        {
            ListNode* root=it;
            while(root!=NULL)
            {
                v.push_back(root->val);
                root=root->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* head, *node = nullptr;
        // start from the end of the array
        for (int i = v.size() - 1; i >= 0; i--)
        {
            node = newNode(v[i], node);
            head = node;
        }
        return head;
    }
};