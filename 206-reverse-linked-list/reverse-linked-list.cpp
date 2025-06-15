
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         // NULL  10-> 20-> 30-> 40->NULL
         ListNode* prev =NULL;
         ListNode* Next =NULL;
         ListNode* curr =head;
          while(curr!=NULL){
            Next =curr->next;
            curr->next =prev;
            prev =curr;
            curr= Next;

          }
          return prev ;

        
    }
};