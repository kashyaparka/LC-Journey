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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) 
    {
        if(depth==1) return new TreeNode(val,root,NULL);
        queue<TreeNode*> q;
        q.push(root);
        
        while(depth--)
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* node= q.front();
                if(depth>1)
                {
                   if(node->left) q.push(node->left);
                   if(node->right) q.push(node->right);
                }
                else
                {
                    node->left = new TreeNode(val,node->left,NULL);
                    node->right = new TreeNode(val,NULL,node->right);
                }
                q.pop();
            }
        }
        return root;
    }
};