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
    int ans=0;
    int binarytodecimalsum(vector<int> out) {
        if(out.size()==0)
            return 0;
        int n=0;
        for(int i=0;i<out.size();i++)
            n=n*2+out[i];
        return n;
    }
    void traverseTheTree(TreeNode* root, vector<int> out) {
        if(!root)
            return;
        out.push_back(root->val);
        if(root->left==NULL && root->right==NULL) 
        {
            ans+=binarytodecimalsum(out);
        }
        traverseTheTree(root->left,out);
        traverseTheTree(root->right,out);
    }
    int sumRootToLeaf(TreeNode* root) {
        vector<int> out;
        traverseTheTree(root,out);
        return ans;
    }
};