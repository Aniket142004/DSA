
class Solution {
public:
  ListNode* reverse(ListNode* head){
     ListNode* prev= NULL;
      ListNode* Next= NULL;
       ListNode* curr= head;
       while(curr){
        Next = curr->next;
        curr->next = prev;
        prev= curr;
        curr= Next;

       }
       return prev;
  }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head ;
         ListNode* a= NULL;
          ListNode* b= NULL;
           ListNode* c= NULL;
            ListNode* d= NULL;
             ListNode* temp= head;
             int n =1;
             while(temp){
                if(n==left-1) a= temp;
                 if(n==left) b= temp;
                if(n==right) c= temp;
                if(n==right+1) d =temp;
                n++;
                temp=temp->next;
            }
            // now the connection part 
           if(a) a->next= NULL;
           c->next =NULL; // ei ;line ta na dile puro list ta reverse hoye jabe 
            c = reverse(b); // always have to pass the head 
           if(a) a->next =c;
            b->next=d;
           if(a) return head ;
           return c;
    }
};