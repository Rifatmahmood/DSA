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
    void insert_tail(ListNode*& head, int val) {
        if(head == NULL) {
            head = new ListNode(val); 

        } else {
            ListNode * newNode = new ListNode(val); 
            ListNode * tmp = head; 
            while(tmp->next != NULL) {
                tmp = tmp->next; 
            }
            tmp->next = newNode; 
        }
    }
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *newNode = NULL; 
        int sum = 0; 
        ListNode *start = head->next; 

        while(start != NULL) {
            if(start->val != 0) {
                sum = sum + start->val; 
            } else {
                insert_tail(newNode, sum); 
                sum = 0; 
            }
            start = start->next;
        }

        return newNode; 
    }
};