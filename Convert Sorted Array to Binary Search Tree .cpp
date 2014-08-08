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
    TreeNode *sortedArrayToBST(vector<int> &num) {
        if (num.size()==0) return NULL;
        return buildTree(num,0,num.size()-1);
    }
    TreeNode *buildTree(vector<int> &num,int start,int end){
        if(start>end) return NULL;
        if(end==start){
            TreeNode *mynode=new TreeNode(num[start]);
            return mynode;
        }
        int middle= (start+end)/2;
        TreeNode *node=new TreeNode(num[middle]);
        node->left=buildTree(num,start,middle-1);
        node->right=buildTree(num,middle+1,end);
        return node;
    }
};