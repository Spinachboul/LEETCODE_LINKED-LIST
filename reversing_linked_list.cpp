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
        ListNode* newHead = NULL;
        while(head!=NULL){
            ListNode* next = head->next;
            head->next = newHead; // here the link break as the head->next points to the dummy node
            newHead = head; // and then the dummy node becomes the new head
            head = next; // this statement is to increment the iteration
        }
        return newHead; 
        
    }
};
