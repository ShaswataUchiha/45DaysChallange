
class Solution {
public:
    bool hasCycle(ListNode *head) {

        //Fast-slow method
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }

            if(fast == slow){
                return true;
            }
        }
        return false;


        //Map Method
        // map<ListNode*, bool> table;
        // ListNode* temp = head;
        // while(temp != NULL){
        //     if(table[temp] == false){
        //         table[temp] = true;
        //     }
        //     else{
        //         return true;
        //     }
        //     temp = temp->next;
        // }
        // return false;

    }
};