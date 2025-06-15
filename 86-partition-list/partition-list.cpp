
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next == NULL) return head ;
        // creating the traveling temp in the head of ll
        ListNode* temp = head ;
        // creating the two farzi node 
        ListNode* low = new ListNode (-1);
        ListNode* tl = low;
        ListNode* high = new ListNode (-1);
        ListNode* th = high ;
        // now apply the condintion of x
        while(temp!= NULL){
            if(temp->val<x){
                tl->next=temp;
                tl =tl->next;
                temp=temp->next;
            }
             else{
                th->next=temp;
                th =th->next;
                temp=temp->next;
            }
        }
        tl->next=high->next;
        th->next=NULL;
        return low->next;
     



    }
};