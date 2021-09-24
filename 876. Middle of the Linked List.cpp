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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        ListNode* x=NULL;
        int count=0,c=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        if(count%2==0){
            c=(count/2)-1;
        }
        else{
           c=count/2; 
        }
        while(temp!=NULL){
            count--;
            if(count==c){
                x=temp;
                break;
            }
            else{
                temp=temp->next;
            }
        }
        return x;
    }
};
