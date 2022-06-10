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
    vector<double> averageOfLevels(TreeNode* root) 
    {
        queue<TreeNode*> q;
        vector<double> res;
        vector<int> v;
        q.push(root);
        double k=root->val;
        res.push_back(k);
        while(q.size())
        {
            double sum=0;
            int count=q.size();
            for(int i=0;i<count;i++)
            {
                root=q.front();
                q.pop();
                if(root->left)
                {
                    sum+=root->left->val;
                    q.push(root->left);
                }
                if(root->right)
                {
                    sum+=root->right->val;
                    q.push(root->right);;
                }
            }
            double t=sum/q.size();
            res.push_back(t);
        }
        res.pop_back();
        return res;
        
    }
};