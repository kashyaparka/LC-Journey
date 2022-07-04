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
//     void solve(TreeNode* root,int val,int depth)
//     {
//         if(!root) return;
      
     
//             TreeNode* k= new TreeNode(val);
//             TreeNode* k1=root->left;
//             k->left=k1;
        
//         if(root->right)
//         {
//               cout<<"kela";
//             TreeNode* k= new TreeNode(val);
//             TreeNode* k1=root->right;
//             k->right=k1;
//         }
//     }
//     void targetDepth(TreeNode* root,int val,int depth,int k)
//     {
//         if(!root) return;
        
//         if(k==depth) 
//         {
//             cout<<k<<" ";
//             solve(root,val,depth);
//         }
//         targetDepth(root->left,val,depth,k+1);
//         targetDepth(root->right,val,depth,k+1);
//     }
    TreeNode* addOneRow(TreeNode* root, int val, int d) 
    {
//         if(!root) return nullptr;
        
//         targetDepth(root->left,val,depth,1);
//         return root;
        if(d==1) return new TreeNode(val,root,NULL);
    
        queue<TreeNode*> q;
        q.push(root);
    
        while(d--)
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front();
                if(d>1)
                {
                    if(node->left) q.push(node->left);
                    if(node->right) q.push(node->right);
                }
                else 
                {
                    node->left = new TreeNode(val,node->left,NULL);
                    node->right = new  TreeNode(val,NULL,node->right);
                }
                q.pop();
            }
        }
        return root;
    }
};