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
        // First declare a dummy node
        ListNode* start = new ListNode();
        start->next = head;

        // Declare the 2 pointers, fast and slow and point them to start pointer
        ListNode* fast = start;
        ListNode* slow = start;


        // Move the fast pointer till the nth node from the last
        for(int i=0 ; i<n ; i++){
            fast = fast->next;
        }

        // Now till the fast pointer is not null
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        // Now to break the link, we will point the slow->next = slow->newt->next;
        slow->next = slow->next->next;
        
        // Then return the next of the dummy node
        return start->next;



        
    }
};
