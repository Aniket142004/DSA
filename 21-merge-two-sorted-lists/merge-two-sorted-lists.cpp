
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* tempa, ListNode* tempb) {
        ListNode*a =tempa;
         ListNode*b =tempb;
          if (tempa == NULL) return tempb;
        if (tempb == NULL) return tempa;


         ListNode* tempc = new  ListNode(10);
          ListNode*c =tempc;
         while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                ListNode* t = new  ListNode(a->val);
                c->next=t;
                c=t;
                a=a->next;
            }
            else{
                 ListNode* t = new  ListNode(b->val);
                 c->next =t;
                 b=b->next;
                 c=t;
            }
            if(a!=NULL){
                c->next=a;
            }
            else{
                c->next=b;
            }
        }
        return tempc->next;

    }
};