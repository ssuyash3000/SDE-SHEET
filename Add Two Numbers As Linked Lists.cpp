Node* addCarry(Node* head, int carry){
    if(carry == 0)
        return head;
    else if(head == NULL and carry != 0){
        Node* newNode = new Node(carry);
        return newNode;
    }
    int firstSum = head->data + carry;
    carry = firstSum / 10;
    firstSum %= 10;
    head->data = firstSum;
    head->next = addCarry(head->next, carry);
    return head;
}
Node *addTwoNumbers(Node *head1, Node *head2, int carry = 0)
{
    if(head1 == NULL and carry == 0)
        return head2;
    else if(head2 == NULL and carry == 0)
        return head1;
    else{
        if(head1 != NULL and carry != 0 and head2 == NULL)
            return addCarry(head1, carry);
        if(head2 != NULL and carry!= 0 and head1 == NULL)
            return addCarry(head2, carry);
        if(head1 == NULL and head2 == NULL and carry != 0)
        {
            Node* newNode = new Node(carry);
            return newNode;
                
        }
        if(head1 == NULL and head2 == NULL and carry == 0)
            return NULL;
    }

    int firstSum = head1->data + head2->data + carry;
    carry = firstSum / 10;
    firstSum %= 10;
    Node* ans = new Node(firstSum);
    ans->next = addTwoNumbers(head1->next, head2->next, carry);
    return ans;
    // Write your code here.
}
