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
    bool res(TreeNode *root, TreeNode *MirrorRoot){
        if(root==NULL&&MirrorRoot==NULL)
            return true;
        if(root!=NULL&&MirrorRoot!=NULL)
            return ((root->val==MirrorRoot->val)&&res(root->left,MirrorRoot->right)&&res(root->right,MirrorRoot->left));
        else
            return false;
        
    }
    bool isSymmetric(TreeNode *root) {
        TreeNode *MirrorRoot=root;
        if(root==NULL)
            return true;
        return res(root->left,MirrorRoot->right);
    }
};