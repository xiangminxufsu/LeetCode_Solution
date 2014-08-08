/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void disconnect(TreeLinkNode *root){
        if(root->left){
            root->left->next=root->right;
            if(root->next==NULL){
                root->right->next=NULL;
            }
            else{
                root->right->next=root->next->left;
            }
            disconnect(root->left);
            disconnect(root->right);
        }
    }
    void connect(TreeLinkNode *root) {
        if(!root)
            return;
        root->next=NULL;
        disconnect(root);
    }
};