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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* fast = head; 
        ListNode* slow = head; 

        for(int i = 0; i < n; i++){
            if(fast == NULL) {
                return head; 
            }
            fast = fast->next; 
        }
//case 2
        if(fast == NULL) {
            ListNode *deleteNode = head; 
            head = head->next; 
            delete deleteNode; 
            return head; 
        }
// case 1; 
        while(fast->next != NULL){
            fast = fast->next; 
            slow = slow->next; 
        }

        ListNode *deleteNode = slow->next; 
        slow->next = slow->next->next; 
        delete deleteNode; 

        return head; 
    }
};