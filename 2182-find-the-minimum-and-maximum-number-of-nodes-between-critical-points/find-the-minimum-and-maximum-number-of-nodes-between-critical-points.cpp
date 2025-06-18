
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
         // initialization of three pointers 
         int idx =1;// always starts with 1 
        
         ListNode*a =head ;
         ListNode*b =head->next ;
          ListNode*c =head->next->next ;
          if(c==NULL) return {-1,-1}; // when the list length is less than 3
         int fidx =-1;
         int lidx=-1;

          // now findout the critical point and find out the max disrt
          while(c){
            if((b->val > a->val && b->val > c->val) || (b->val < a->val && b->val < c->val)){
                if(fidx==-1){
                    fidx=idx;
                }
                else{
                    lidx=idx;
                }
              
            }
              a=a->next;
                b=b->next;
                c=c->next;
                idx++;
        }
              if(lidx==-1) return {-1,-1};
              int maxd=(lidx-fidx);
          
             // now find out the min dist
        idx =1;// always starts with 1 
        int mind = INT_MAX;
        a =head ;
        b =head->next ;
        c =head->next->next ;
         fidx =-1;
        lidx=-1;

          // now findout the critical point and find out the max disrt
          while(c){
            if((b->val > a->val && b->val > c->val) || (b->val < a->val && b->val < c->val)){
                fidx =lidx;
                lidx=idx;
                
                if (fidx != -1) {
                   int d = lidx - fidx;
                   mind = min(d, mind);
                }
            
             
            }
               a=a->next;
                b=b->next;
                c=c->next;
                idx++;
        }
            return {mind, maxd};

     }
};