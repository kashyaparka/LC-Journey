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
    void allnodes(queue<TreeNode*> &q,TreeNode* root)
    {
        if(!root)
            return;
         q.push(root);
        allnodes(q,root->left);
        allnodes(q,root->right);
    }
    void dfs(TreeNode* root,long long val,int &count)
    {
        if(!root) return;
        if(val == root -> val) count++;
       // cout<<val<<" ";
        dfs(root->left,val-root->val,count);
        dfs(root->right,val-root->val,count);
        
    }
    int pathSum(TreeNode* root, int targetSum) 
    {
        if(!root) return 0;
        int count=0;
        queue<TreeNode*> q;
        allnodes(q,root);
        cout<<q.size();
        while(!q.empty())
        {
            dfs(q.front(),targetSum,count);
            q.pop();
        }
        return count;
    }
};