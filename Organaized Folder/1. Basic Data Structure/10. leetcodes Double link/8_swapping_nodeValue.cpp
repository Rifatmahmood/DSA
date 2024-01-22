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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* tmp = head; 
        for(int i = 0; i <k - 1; i++ ){
            tmp = tmp->next; 
        }

        ListNode* fast = tmp; 
        ListNode* slow = head;

        while(fast->next != NULL){
            fast = fast->next; 
            slow = slow->next; 
        }

     swap(tmp->val, slow->val);
        return head; 
        
    }
};