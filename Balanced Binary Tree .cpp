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
    bool isBalanced(TreeNode *root) {
        if(root==NULL) return true;
        if(abs(getHeight(root->left)-getHeight(root->right))>1) return false;
        else isBalanced(root->left)&&isBalanced(root->right);
        //return true;
    }
    int getHeight(TreeNode *root){
        if (!root) return 0;
        else return max(getHeight(root->left),getHeight(root->right))+1;
    }
};