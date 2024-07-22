class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(!list1) return list2;
        if(!list2) return list1;

        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;

        while(list1 && list2){
            if(list2->val >= list1->val){
                temp->next = list1;
                list1 = list1->next;
            }
            else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        if(list1 != NULL){
            temp->next = list1;
        }
        else{
            temp->next = list2;
        }

        ListNode* mergeList = dummy->next;
        delete dummy;
        return mergeList;

    }
};