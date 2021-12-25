/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        //GOD KNOWS WHAT WRONG IN MY CODE
        // if(root->val%2==0)
        //      return false;
        // queue<TreeNode*> q;
        // int level=0;
        // vector<int> v;
        // q.push(root);
        // while(!q.empty())
        // {
        //     int count=q.size();
        //     for(int i=0;i<count;i++)
        //     {   
        //         TreeNode* curr=q.front();
        //         q.pop();
        //         v.push_back(curr->val);
        //         if(curr->left)
        //         {
        //             q.push(curr->left);
        //            // v.push_back(curr->left->val);
        //         }
        //         if(curr->right)
        //         {
        //             q.push(curr->right);
        //           //  v.push_back(curr->right->val);
        //         }
        //     }
        //     if(level%2==0)
        //     {
        //         for(int i=0;i<v.size()-1;i++)
        //         {
        //            if((v[i]>=v[i+1] || v[i]%2==0) && v.size()>=2)
        //                return false;
        //            if(v.size()==1 && v[i]%2==0)
        //                return false;
        //         }
        //     }
        //     if(level%2!=0)  //odd index->strictly  decreasing 
        //     {
        //         for(int i=0;i<v.size()-1;i++)
        //         {
        //            if((v[i]<=v[i+1] || v[i]%2!=0) && v.size()>=2)
        //                return false;
        //            if(v.size()==1 && v[i]%2!=0)
        //                return false;
        //         }
        //     }
        //     v.clear();
        //     level++;
        // }
        // return true;
        
        
        queue<TreeNode*> q;
        q.push(root);
        int lv = 0;
        while (q.size()) {
            int cnt = q.size(), prev = lv % 2 == 0 ? 0 : INT_MAX;
            while (cnt--) {
                auto node = q.front();
                q.pop();
                if (lv % 2 == 0) {
                    if (node->val % 2 == 0 || node->val <= prev) return false;
                } else {
                    if (node->val % 2 || node->val >= prev) return false;
                }
                prev = node->val;
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            ++lv;
        }
        return true;
    }
};