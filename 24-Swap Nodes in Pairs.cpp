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
    ListNode* swapPairs(ListNode* head) {
         if(head==NULL || head->next==NULL) return head; //(!head) == (head==NULL)
        
        ListNode* f = head;
        ListNode* s = head;
        ListNode* dummy = new ListNode(0);
        ListNode* dh = dummy;
        
       dummy->next = head;
        
        while(dummy->next && dummy->next->next){
            f=dummy->next;
            s=dummy->next->next;
            
            dummy->next = s;
            f->next = s->next;
            s->next = f;
            dummy = dummy->next->next;
        }
        
        return dh->next;
    }
};
