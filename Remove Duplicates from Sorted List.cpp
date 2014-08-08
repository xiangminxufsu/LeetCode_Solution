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
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *mynode=head;
        if(head==NULL){
            return head;
        }
        while(mynode){
            while(mynode->next&&mynode->val==mynode->next->val){
                mynode->next=mynode->next->next;
            }
            mynode=mynode->next;
        }
        return head;
    }
};