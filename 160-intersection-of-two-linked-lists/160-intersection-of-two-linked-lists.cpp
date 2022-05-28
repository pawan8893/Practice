/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    int getLen(ListNode* head){
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
 
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL){
            return NULL;
        }
        int lenA=getLen(headA);
        int lenB=getLen(headB);
        
        int diff=abs(lenA-lenB);
        
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        
        if(lenA>lenB){
            while(diff>0){
                temp1=temp1->next;
                diff--;
            }
        }
        else{
            while(diff>0){
                temp2=temp2->next;
                diff--;
            }
        }
            
        while(temp1!=NULL || temp2!=NULL){
            if(temp1==temp2){
                return temp1;
            }
            else{
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        return NULL;
    }
};