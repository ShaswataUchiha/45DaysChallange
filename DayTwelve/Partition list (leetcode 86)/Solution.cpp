class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* smallList = new ListNode();
        ListNode* largeList = new ListNode();

        ListNode* smallPtr = smallList;
        ListNode* largePtr = largeList;

        while(head != NULL){
            if(head->val < x){
                smallPtr->next = head;
                smallPtr = smallPtr->next;
            }
            else{
                largePtr->next = head;;
                largePtr = largePtr->next;
            }
            head = head->next;
        }

        smallPtr->next = largeList->next;
        largePtr->next = NULL;

        return smallList->next;
    }
};