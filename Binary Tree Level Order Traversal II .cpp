/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #include<queue>
class Solution {
public:
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int>>res,ans;
        queue<TreeNode*>q1,q2;
        vector<int>level;
        TreeNode *front;
        if(!root)return res;
        q1.push(root);
        while((!q1.empty())||(!q2.empty())){
            while(!q1.empty()){
                front=q1.front();
                level.push_back(front->val);
                if(front->left) q2.push(front->left);
                if(front->right) q2.push(front->right);
                q1.pop();
            }
            if(level.size()!=0){
                res.push_back(level);
                level.erase(level.begin(),level.end());
            }
            while(!q2.empty()){
                front=q2.front();
                level.push_back(front->val);
                if(front->left) q1.push(front->left);
                if(front->right) q1.push(front->right);
                q2.pop();
            }
            if(level.size()!=0){
                res.push_back(level);
                level.erase(level.begin(),level.end());
            }
        }
        for(int i=res.size()-1;i>=0;i--){
            ans.push_back(res[i]);
        }
        return ans;
    }
};