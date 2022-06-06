LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
   LinkedListNode<int>* prev = NULL;
    while(head != NULL){
        LinkedListNode<int>* nextNode = head -> next;
        head->next = prev;
        prev = head;
        head = nextNode;
    }
    return prev;
}
