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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> v;
        if(!root)
            return v;
        int level=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int> levelvector(s);
                //left to left
                for(int i=0;i<s;i++)
                {
                    auto temp=q.front();
                    q.pop();
                   if(level%2==0)
                       levelvector[i]=temp->val;
                    else
                        levelvector[s-1-i]=temp->val;
    
                        if(temp->left) q.push(temp->left);
                        if(temp->right)
                           q.push(temp->right);
                   
                }
           level++;
           v.push_back(levelvector); 
        }
        return v;
    }
};