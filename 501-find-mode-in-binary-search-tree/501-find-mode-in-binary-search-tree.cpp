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
    unordered_map<int,int> map;
    vector<int> v;
public:
    void inorder(TreeNode* root)
    {
        if(!root) return;
        
        inorder(root->left);
        v.push_back(root->val);
        map[root->val]++;
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) 
    {
        if(!root) return vector<int>{};
        if(!root->left && !root->right) return vector<int> {root->val};
        vector<int> ans;
        inorder(root);
        int res=1,c=1;
        for(int i=1;i<v.size();i++)
        {
            if(v[i-1]==v[i])
                c++;
            else
                c=1;
            res=max(c,res);
        }
        cout<<res<<" ";
        for(auto it:map)
            if(it.second==res)
                ans.push_back(it.first);
        return ans;
    }
};