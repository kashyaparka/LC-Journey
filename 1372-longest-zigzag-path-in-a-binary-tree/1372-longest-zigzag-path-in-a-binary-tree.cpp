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
private:
    queue<TreeNode*> q;
    int ans=INT_MIN;
public:
    void dfs(TreeNode* root,bool isLeft,int c)
    {
        if(!root) return;
        
         ans=max(ans,c);
         if (isLeft) {
            dfs(root->left, false, c + 1); // keep going from root to left
            dfs(root->right, true, 1); // restart going from root to right
        } else {
            dfs(root->right, true, c + 1); // keep going from root to right
            dfs(root->left, false, 1); // restart going from root to left;
         }
    }
//     void allNodes(TreeNode* root)
//     {
//         if(!root) return;
        
//         q.push(root);
//         allNodes(root->left);
//         allNodes(root->right);    
//     }
    int longestZigZag(TreeNode* root) 
     {
    //     if(!root) return 0;
    //     vector<int> v;
    //     allNodes(root);
    //     while(!q.empty())
    //     {
    //         dfs(q.front(),true,0);
    //         q.pop();
    //     }
        dfs(root,true,0);
        dfs(root,false,0);
        return ans;
    }
};