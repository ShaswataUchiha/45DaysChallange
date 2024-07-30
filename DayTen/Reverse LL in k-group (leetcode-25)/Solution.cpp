class Solution {
public:
    int getLength(ListNode* head){
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        if(!head || !head->next) return head;

        ListNode* prev = NULL;
        ListNode* curr = head;
        
        int len = getLength(head);
        int pos = 0;

        if(len < k) return head;

        while(pos < k){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            pos++;
        }

        if(curr != NULL){
            ListNode* recAns = reverseKGroup(curr, k);
            head->next = recAns;
        }

        return prev;
    }
};