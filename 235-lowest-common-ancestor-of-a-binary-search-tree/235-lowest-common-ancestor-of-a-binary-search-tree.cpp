/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* solve(TreeNode* root,TreeNode* p,TreeNode* q)
    {
        if(!root) return root;
        
        if(root->val==p->val || root->val==q->val)
            return root;
        TreeNode* leftside=solve(root->left,p,q);
        TreeNode* rightside=solve(root->right,p,q);
        
        if(leftside && rightside) return root;
        else if(leftside && rightside==NULL) return leftside;
        else if(leftside==NULL && rightside) return rightside;
        else return NULL;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        return solve(root,p,q);
    }
};