/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode *root, int sum) {
        if(root==NULL)return false;
        if(root && root->val==sum && root->left==NULL && root->right==NULL)return true;
        if(root && root->val!=sum && root->left==NULL && root->right==NULL)return false;
        return (hasPathSum(root->left,sum-(root->val))||hasPathSum(root->right,sum-(root->val)));
    }
};