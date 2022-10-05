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
    void solve(TreeNode* root)
    {
        if(!root) return;
        
        map[root->val]++;
        
        if(!root->left && !root->right)
        {
            int c=0;
            for(auto i : map)
            {
               
                if(i.second % 2 == 1 )
                    c++;
              
            }
            if(c<=1)
                res++;
        }
        
        solve(root->left);
        solve(root->right);
        map[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) 
    {
        if(!root) return 0;
        solve(root);
        return res;
    }
    private:
    unordered_map<int,int> map;
    int res=0;
};