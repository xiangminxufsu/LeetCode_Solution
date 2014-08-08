/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *mynode=NULL;
        ListNode **Pmynode=&mynode;
        while(l1&&l2){
            if((l1->val)<(l2->val)){
                (*Pmynode)=l1;
                l1=l1->next;
            }
            else{
                (*Pmynode)=l2;
                l2=l2->next;
            }
            Pmynode=&((*Pmynode)->next);
        }
        if(l1){
            (*Pmynode)=l1;
        }
        else{
            (*Pmynode)=l2;
        }
        return mynode;
    }
};