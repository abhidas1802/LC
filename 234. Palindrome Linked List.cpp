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
    ListNode *Reverse(ListNode *head){
        ListNode *x=NULL;
        ListNode *y=NULL;
        while(head!=NULL){
            y=head->next;
            head->next=x;
            x=head;
            head=y;
        }
        return x;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
        ListNode *fast=head;
        ListNode *slow=head;
        if(temp->next==NULL||temp==NULL){
            return true;
        }
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=Reverse(slow->next);
        slow=slow->next;
        while(slow!=NULL){
            if(slow->val==temp->val){
                temp=temp->next;
                slow=slow->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
    
};
