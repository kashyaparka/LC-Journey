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
    int solve(TreeNode* root,int c)
    {
        if(!root) return 0;
        return max(solve(root->left,c),solve(root->right,c))+1;
    }
    int maxDepth(TreeNode* root) 
    {
        int c=0;
        return solve(root,c);
    }
};