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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        ListNode* delNode=NULL;
        while(temp->next!=NULL){
            delNode=temp->next;
            if(temp->val == delNode->val){
                temp->next=delNode->next;
                delNode->next=NULL;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};