
class Solution {
public:
    ListNode* reverse(ListNode* head){
        // iterrative solution 
         ListNode* curr = head;
         ListNode* Next = NULL;
         ListNode* prev = NULL;
         while(curr!=NULL){
            Next = curr->next; // assign the next 
            curr->next= prev;
            prev =curr;
            curr = Next;
         }
         return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode*  temp = head ;
        ListNode* c = new ListNode(10);
        ListNode* tempc = c;
        // creating a deep copy of the code 
        while(temp!=NULL){
            // puro node take connect kore hobe sudhu val take korle hobe ni
            ListNode* node=new ListNode(temp->val);
            tempc->next = node ; // connecting the puro node 
            tempc=tempc->next;
            temp =temp->next;

        }
        // now reverse the full copyed linked list 
        c=c->next; // deleting the dummy node 
        c= reverse(c);
        // now traverse in the two loop if both are same return true 
        // else return false
        temp = head ;
        ListNode* a = c;
            while(a!=NULL){
            if(temp->val!= a->val){
                return false ;

            }
            a=a->next;
            temp=temp->next;
        
            }
        return true;

        
    }
};