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
    ListNode* getMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
            if(fast->next!=NULL){
                fast=fast->next;
            }
        }
        return slow;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward=NULL;
        
        while(curr!=NULL){
            forward =curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return false;
        }
        if(head->next==NULL){
            return true;
        }
        
        ListNode* mid=getMid(head);
        
        ListNode* temp=mid->next;
        mid->next=reverse(temp);
        
        ListNode* head1=head;
        ListNode* head2=mid->next;
        
        while(head2!=NULL){
            if(head1->val!=head2->val){
                return false;
            }
            else{
                head1=head1->next;
                head2=head2->next;
            }
        }
        
        temp=mid->next;
        mid->next=reverse(temp);
        return true;
    }
};