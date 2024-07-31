class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node* mergeTwoLists(Node* list1, Node* list2) {

        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;    
        
        Node* result;
        if(list1->data < list2->data){
            result = list1;
            result->bottom = mergeTwoLists(result->bottom, list2);
        }
        else{
            result = list2;
            result->bottom = mergeTwoLists(list1, result->bottom);
        }
        return result;
    }
    
    Node *flatten(Node *head) {
        // Your code here
        if(head == NULL)
            return NULL;
            
        Node* head2 = flatten(head->next);    
            
        return mergeTwoLists(head, head2);    
    }
};