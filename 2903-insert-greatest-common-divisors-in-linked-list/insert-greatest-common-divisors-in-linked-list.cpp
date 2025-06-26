
class Solution {
public:
int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
         ListNode* temp =head;
         while (temp != NULL && temp->next != NULL)
        {
            int a =temp->val;
            int b =temp->next->val;
            int c = gcd(a,b);
          ListNode* node =new  ListNode(c);
           node->next= temp->next;
           temp->next=node;
           temp=node->next; // always remember that temp increase will be after the node 
        }
        return head;
    }
};