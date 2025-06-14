
class Solution {
public:
  ListNode* merge(ListNode* a, ListNode* b) {
        
           ListNode* c = new  ListNode (-1);
            ListNode* tempc=c;
            while(a!= NULL && b!= NULL){
                if(a->val <= b->val){
                    tempc->next = a;
                    a= a->next ;
                    tempc =tempc->next;
                }
                else{
                    tempc->next = b;
                    b= b->next ;
                    tempc =tempc->next;
                }
            }
            if(a==NULL) tempc->next=b;
            if(b== NULL) tempc->next = a;

            return c->next;
        
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next ==NULL) return head ;
        ListNode* slow = head ;
        ListNode* fast = head ;
        // to condition to find out the left most middle elemnt 
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow =slow->next;
            fast =fast->next->next;
        }
        // now the slow pointer is at the left middle elemnt 
         ListNode* a = head ;
         ListNode* b = slow->next ;
         slow->next =NULL;
         // now the majic part 
        a= sortList(a);
        b= sortList(b);
        ListNode*c = merge(a,b);
        return c;

         

    }
};