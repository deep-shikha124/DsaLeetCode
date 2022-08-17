/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // ListNode *p=head;
        // ListNode *q=NULL;
        // ListNode *r=NULL;
        // while(p!=0){
        //     r=q;
        //     q=p;
        //     p=p->next;
        //     q->next=r;
        // }
        // head=q;
        // return q;
        
//         ListNode *dummy=NULL;
//         while(head!=NULL){
//             ListNode* next=head->next;
//             head->next=dummy;
//             dummy=head;
//             head=next;
            
//         }
//         return dummy;
        // ListNode*curr=head;
        // ListNode*prev=NULL;
        // while(curr!=NULL){
        //     ListNode*temp=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=temp;
        // }
        // return prev;
        
        ListNode *prev_p=NULL;
        ListNode *curr_p=head;
        ListNode *next_p;
        while(curr_p){
            next_p=curr_p->next;
            curr_p->next=prev_p;
            
            prev_p=curr_p;
            curr_p=next_p;
        }
        head=prev_p;
        return prev_p;
      }
};