/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //hash map :to store element count 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL  || (head->next == NULL)) 
        return NULL;
         ListNode* fast=head;
      ListNode* slow=head;
      while(fast!=NULL &&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)  //cycle detect
            break;
        
        

      }  
      if(slow!=fast) return NULL;
      
      ListNode *P=head;
      while(P!=slow){
        P=P->next;
        slow=slow->next;


      }
      return slow;
    }
};