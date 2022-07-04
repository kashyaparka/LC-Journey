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
                if(d>1)
                {
                    if(q.front()->left) q.push(q.front()->left);
                    if(q.front()->right) q.push(q.front()->right);
                }
                else 
                {
                    q.front()->left = new TreeNode(val,q.front()->left,NULL);
                    q.front()->right = new  TreeNode(val,NULL,q.front()->right);
                }
                q.pop();
            }
        }
        return root;
    }
};