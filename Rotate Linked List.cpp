Node* kreverse(Node* head, Node* tail){
    Node* prev = tail;
    if(head == NULL)
        return head;
    while(head != tail){
        Node* next = head -> next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}
Node *rotate(Node *head, int k) {


    if(k == 0)
        return head;
    int count = 0;
    //fullreverse
    Node*prev = NULL;
    while(head != NULL)
    {
        Node*next = head->next;
        head -> next = prev;
        prev = head;
        head = next;
        count++;
    }
    if(count == k){
        k = k % (count + 1);
    }
    else{
        k = k % count;
    }
    Node* kthNode = prev;
    for(int i = 1; i < k and kthNode!= NULL; i++)
        kthNode = kthNode -> next;
    if(kthNode == NULL)
        return prev;

    Node* k1thNode = kthNode->next;
    //revese of 1st k elements
    Node* newHead = kreverse(prev, k1thNode);
    //revese of LAST k elements
    prev -> next = kreverse(k1thNode, NULL);

    return newHead;

}
