class Solution {
public:
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next) return head;

        ListNode* dummy = new ListNode();
        dummy->next = head;

        ListNode* prev = dummy;

        for(int i=1; i<left; i++){
            prev = prev->next;
        } 
        
        ListNode* curr = prev->next;

        for(int i=0; i<right - left; ++i){
            ListNode* temp = prev->next;
            prev->next = curr->next;
            curr->next = curr->next->next;
            prev->next->next = temp;
        }


        return dummy->next;

    }
};
