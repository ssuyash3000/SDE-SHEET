LinkedListNode<int>* mid(LinkedListNode<int>* head){
    LinkedListNode<int>* fast = head->next;
    while(fast != NULL and fast -> next != NULL){
        head = head -> next;
        fast = fast -> next -> next;
    }
    return head;
}
LinkedListNode<int> *rev(LinkedListNode<int>* head){
    LinkedListNode<int>* prev = NULL;
    while(head != NULL){
        LinkedListNode<int>* next = head->next;
        head -> next = prev;
        prev = head;
        head = next;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    if(head == NULL or head -> next == NULL)
        return true;
    LinkedListNode<int>* midNode = mid(head);
    LinkedListNode<int>* midNext = midNode->next;
    midNode->next = NULL;
    midNext = rev(midNext);
    //cout << midNode->data << "\n";
    while(midNext  != NULL){
        if(head->data != midNext->data)
            return false;
        head = head -> next;
        midNext = midNext -> next;
    }
    return true;
}
