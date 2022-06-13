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
    
     ListNode* reverseList(ListNode* head) {
        
        if (head == NULL || head-> next == NULL){ return head; } 
        ListNode *next = NULL , *pre = NULL;
        while(head!=NULL){
          
            next = head -> next;
            head->next = pre; pre = head;  head = next; 
            
        }
        return pre;     
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *sum = new ListNode (0);
        ListNode *res = sum; int carry =0;
        l1 = reverseList(l1);
        l2 = reverseList(l2);
        while (l1!=NULL || l2!=NULL || carry){
            int s = 0;
            if (l1!=NULL){ s+= l1-> val; l1 = l1 -> next; }           
            if (l2!=NULL){ s+= l2-> val; l2 = l2 -> next; }
            
            s += carry;
            carry = s/10; 
            ListNode *v = new ListNode(s%10);
            res->next = v;
            res = res -> next;
            
        }
        sum->next =  reverseList(sum->next);
         return sum -> next;
    }
};