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
    bool haasymmetrichai(TreeNode* p,TreeNode* q)
    {
        if(p==NULL && q==NULL) return true;
        
        if(p==NULL && q!=NULL) return false;
        
        if(p!=NULL && q==NULL) return false;
        
        if(p->val!=q->val) return false;
        return haasymmetrichai(p->left,q->right) && haasymmetrichai(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) 
    {
        if(!root) return true;
        
        return haasymmetrichai(root->left,root->right);
        
    }
};