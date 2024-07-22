class Solution {
public:

    // ListNode* reverseListRecursion(ListNode* &prev, ListNode* &curr){
    //     //Base Case
    //     if(curr == NULL){
    //         return prev;
    //     }

    //     ListNode* nextNode = curr->next;
    //     curr->next = prev;

    //     return reverseListRecursion(curr, nextNode);
    // }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        // Using recursion
        // return reverseListRecursion(prev, curr);

        // iterative method
        while(curr != NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};