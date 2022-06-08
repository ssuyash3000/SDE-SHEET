Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL)
        return second;
    if(second == NULL)
        return first;
    
    Node<int>* head = NULL;
    Node<int>* tail = NULL;
    while(first != NULL and second != NULL){
        if(first->data < second -> data){
            if(head == NULL){
                head = tail = first;
                first = first-> next;
            }else{
                tail-> next = first;
                tail = first;
                first = first-> next;
            }
        }
        else
        {
            if(head == NULL){
                head = tail = second;
                second = second -> next;
            }    
            else{
                tail->next = second;
                tail = second;
                second = second -> next;
            }
        }
    }
    if(first != NULL)
        tail->next = first;
    if(second != NULL)
        tail->next = second;

    return head;


}
