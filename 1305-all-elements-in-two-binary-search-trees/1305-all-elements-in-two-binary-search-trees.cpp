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
    void inorder(TreeNode* root,vector<int> &v)
    {
        if(!root)
        {
            return;
        }
        v.push_back(root->val);
        inorder(root->left,v);
        inorder(root->right,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> v1,v2;
        inorder(root1,v1);
        inorder(root2,v2);
        v1.insert(v1.end(), v2.begin(), v2.end());
        vector<int> res=v1;
        sort(res.begin(),res.end());
        return res;
    }
};