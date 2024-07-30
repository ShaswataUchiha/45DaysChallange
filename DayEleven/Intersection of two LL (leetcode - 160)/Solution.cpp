class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;

        while(a->next && b->next){
            if(a == b){
                return a;
            }

            a = a->next;
            b = b->next;
        }

        if(a->next == NULL && b->next == NULL && a != b) return NULL;

        if(a->next == 0){
            //In this case b is larger then a
            int len = 0;
            while(b->next){
                len++;
                b = b->next;
            }

            while(len--){
                headB = headB->next;
            }
        }
        else{
            //In this case a is larger then b
            int len = 0;
            while(a->next){
                len++;
                a = a->next;
            }

            while(len--){
                headA = headA->next;
            }
        }

        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }

        return headA;
    }
};