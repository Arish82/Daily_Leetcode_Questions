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
    ListNode* removeZeroSumSublists(ListNode* head) {

        //base case

        if(head==NULL){
            return NULL;
        }

        //recursive call

        ListNode* smallAns=removeZeroSumSublists(head->next);

        //our part and small calculation after
        //recursion returns it's answer

        if(head->val==0) return smallAns;
        int sum=head->val;
        bool check=false;
        ListNode* temp=smallAns;
        while(temp!=NULL){
            sum+=temp->val;
            if(sum==0){
                check=true;
                break;
            }
            temp=temp->next;
        }
        if(check){
            return temp->next;
        }
        head->next=smallAns;
        return head;
    }
};