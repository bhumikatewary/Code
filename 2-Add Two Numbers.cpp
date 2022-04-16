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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();  //creating a dummy node
        ListNode* temp=dummy; //assigning a temporary listnode which we will iterarte through
            int carry=0;
            
            while(l1 !=NULL || l2!= NULL || carry){ //checking condition till when we will add the digits
                                                    
                int sum=0;  //taking a temporary sum which will keep updating to 0 when if loop is over
                if(l1 != NULL){
                    sum+=l1->val;
                    l1=l1->next;
                }
                
                if(l2!=NULL){
                    sum+=l2->val; //adding list value
                    l2=l2->next; //going forward
                }
                
                sum+=carry; //if carry exists, otherwise carry is 0 by default
                
                //how to find carry value:
                carry = sum/10;
                ListNode* node = new ListNode(sum%10); // we will create a node to store the final value and the value is sum%10
                temp->next = node; //updating pointer value
                temp = temp->next; //updating temp value
                
            }
        
        return dummy->next;
    }
};

/* Time Complexity: O(max(m,n))
   Space Complexity: O(n) */
