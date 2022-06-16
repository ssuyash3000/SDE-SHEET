Node *firstNode(Node *head)
{
    map<Node*, int> mp;
    int i = 1;
    while(head != NULL){
        if(mp[head] != 0)
            return head;
        else{
            mp[head] = i;
            i++;
            
        }
        head = head -> next;
    }
    return NULL;
    

}
