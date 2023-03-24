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
    ListNode* middleNode(ListNode* head) {
        // For solving this question , we will use the "Tortoise Method"

        // First create 2 pointers , slow and fast and point them to head
        ListNode* slow = new ListNode();
        ListNode* fast = new ListNode();
        slow=head;
        fast = head;

        // Then start traversing the fast pointer by 2 and the slow pointer by 1
        while(fast!=NULL and fast->next!=NULL){
            fast = fast->next->next;
            slow=slow->next;

        }
        return slow; // this will return the middle of the linked list


        
    }
};
