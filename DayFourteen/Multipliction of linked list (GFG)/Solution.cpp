class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        long long num1 = 0;
        long long num2 = 0;
        Node* l1 = first;
        Node* l2 = second;
        
        while(l1 || l2){
            if(l1 != NULL){
                num1 = (num1*10)%1000000007 + l1->data;
                l1 = l1->next;
            }
            if(l2 != NULL){
                num2 = (num2*10)%1000000007 + l2->data;
                l2 = l2->next;
            }
        }
        return (num1*num2)%1000000007;
    }
};