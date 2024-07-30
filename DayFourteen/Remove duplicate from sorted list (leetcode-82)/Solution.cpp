class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(!head || !head->next) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        while(head != NULL){
            if(head->next != NULL && head->val == head->next->val){
                while(head->next != NULL && head->val == head->next->val){
                    head = head->next;
                }
                 prev->next = head->next;
            }
            else{
                prev = prev->next;
            }
            head = head->next;
        }

        return dummy->next;
    }
};