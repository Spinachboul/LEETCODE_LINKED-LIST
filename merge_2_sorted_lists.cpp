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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Writing the base cases
        
        // Here if any of the two of the lists is NULL, return the other list
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        
        // We use non-tail recursion to again iterate over the linked list 
        if(list1->val <= list2->val){

            // Here if the condition satisfies , then we add the element of the list1 to the front of the list2
            list1->next = mergeTwoLists(list1->next, list2);

            // then we return list1 as the answer
            return list1;
        }
        else{
            // if the list2->val<=list1->val then we can just this to the front of the list1

            list2->next = mergeTwoLists(list1, list2->next);
            // then we return list2 as the answer.
            return list2;
        }


        
    }
};
