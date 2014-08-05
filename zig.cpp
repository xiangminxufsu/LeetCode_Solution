#include<iostream>
#include<vector>

using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        //use a vector to store nodes in the same level, read from right to left to satisfy zigzag
        vector<vector<int> > ans;
        vector<int> level;
        vector<TreeNode*> Nodelevel,Nodelevel2;
        if(root==NULL)return ans;
        
        level.push_back(root->val);
        Nodelevel.push_back(root);
        ans.push_back(level);
        
        int TotalChild(0);
        while(true){
            TotalChild=0;
            level.clear();
            
            if(Nodelevel.size()!=0){
                for(int i=Nodelevel.size()-1;i>=0;--i){
                    level.push_back(Nodelevel[i]->val);
                    if(Nodelevel[i]->right){
                        TotalChild++;
                        cout<<TotalChild<<"here"<<endl;
                        Nodelevel2.push_back(Nodelevel[i]->right);
                    }
                    if(Nodelevel[i]->left){
                        TotalChild++;
                        cout<<TotalChild<<"here1"<<endl;
                        Nodelevel2.push_back(Nodelevel[i]->left);
                    }
                }
                ans.push_back(level);
                Nodelevel.clear();
            }
           else{
                for(int i=Nodelevel2.size()-1;i>=0;--i){
                    level.push_back(Nodelevel2[i]->val);
                    if(Nodelevel[i]->right){
                        TotalChild++;
                        cout<<TotalChild<<"here3"<<endl;
                        Nodelevel.push_back(Nodelevel2[i]->right);
                    }
                    if(Nodelevel[i]->left){
                        TotalChild++;
                        cout<<TotalChild<<"here4"<<endl;
                        Nodelevel.push_back(Nodelevel2[i]->left);
                    }
                }
                ans.push_back(level);
                Nodelevel2.clear();
            }
        if(TotalChild==0)break;
        }
        return ans;
    }
};

int main(){
	TreeNode node1(1), node2(2);
	node1.left=&node2;
	class Solution mys;
	mys.zigzagLevelOrder(*node1);
}