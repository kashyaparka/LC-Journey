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
private:
    int count=0;
    queue<TreeNode*> q;
public:
    void allnodes(TreeNode* root)
    {
        if(!root) return;
        
        q.push(root);
        allnodes(root->left);
        allnodes(root->right);
    }
    void dfs(TreeNode* root,long long val)
    {
        if(!root) return;
        
        if(val == root -> val) count++;
        dfs(root->left,val-root->val);
        dfs(root->right,val-root->val);
    }
    int pathSum(TreeNode* root, int targetSum) 
    {
        if(!root) return 0;
      
        allnodes(root);
        while(!q.empty()){
            dfs(q.front(),targetSum);
            q.pop();
        }
        return count;
    }
};