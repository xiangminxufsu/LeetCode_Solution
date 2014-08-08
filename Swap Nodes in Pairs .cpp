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
   /* ListNode *BuildList(ListNode *head){
        if(head->next==NULL||head==NULL) return head;
        ListNode *temNode=head->next;
        temNode->next=head;
        head->next=head->next->next;
        head=temNode;
        head->next->next=BuildList(head->next->next);
        return head;
    }*/
    ListNode *swapPairs(ListNode *head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode *mynode=head->next;
        head->next=mynode->next;
        mynode->next=head;
        head=mynode;
        head->next->next=swapPairs(head->next->next);
        return head;
    }
};