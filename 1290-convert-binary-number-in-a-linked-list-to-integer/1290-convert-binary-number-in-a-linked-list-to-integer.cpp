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
    int getDecimalValue(ListNode* head) {
        
        if (head == NULL) return 0;
        int res=0;
        ListNode *temp = head;
        // 1st APPROACH
        
//         while(temp!=NULL){
            
//             res*=2; 
//             if (temp->val == 1){ res+=1; }
            
//             temp = temp -> next; 
//         }
        // 2nd APPROACH
        
        string s="";
        while (temp!=NULL){
             if (temp->val == 1) s+= '1'; 
             else  s+='0'; 
            
             temp = temp -> next;
        }
        reverse(s.begin(),s.end());
        for (int i=0;i<s.length();i++){
            if (s[i] == '1') 
                res+= (1<<i);
        }
        
         return res;
        
        
    }
};