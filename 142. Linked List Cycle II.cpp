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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        int c=0;
        ListNode *ent=head;
        ListNode *slow=head;
        ListNode *fast=head;
        while(slow!=NULL&&fast!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            if(slow==fast){
                c=1;
                break;
            }
            
        }
        
        if(c==1){
            while(slow!=ent){
                slow=slow->next;
                ent=ent->next;
            }
            return slow;
        }
        
        return NULL;
        
    }
};
