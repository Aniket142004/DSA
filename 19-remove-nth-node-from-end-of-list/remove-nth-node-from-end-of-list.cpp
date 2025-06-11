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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode* temp =head;
         int count =0;
         while(temp!=NULL){
            count ++;
            temp =temp->next;
         }
         if (count ==n){
            head=head->next;
            return head;
         }
         int m = count-n+1;
         temp = head;
          for(int i=1;i<m-1;i++){ // we have to traverse just ager node to be deleted
            temp = temp ->next;
          }
          temp->next=temp->next->next;
          count--;
          return head ;
        
    }
};