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
//     void remove(std::vector<vector<int>> &v)
//     {
//         auto end = v.end();
//         for (auto it = v.begin(); it != end; ++it) {
//             end = std::remove(it + 1, end, *it);
//          }
 
//          v.erase(end, v.end());
//     }
private:
    void dfs(TreeNode* root,int val,vector<int> &v,vector<vector<int>> &res)
    {
        if(!root) return;
        
        v.push_back(root->val);
        
        if(!(root -> left) && !(root -> right) && val == root -> val) res.push_back(v);  

        dfs(root->left,val-root->val,v,res);
        dfs(root->right,val-root->val,v,res);
        v.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<vector<int>> res;
        vector<int> v;
        dfs(root,targetSum,v,res);
        return res;
    }
};