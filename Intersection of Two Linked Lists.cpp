int findIntersection(Node *firstHead, Node *secondHead)
{
    unordered_set<Node*> st;
    while(firstHead != NULL and secondHead != NULL){
        if(st.find(secondHead) == st.end()){
            st.insert(secondHead);
            secondHead = secondHead->next;
        }else{
            return secondHead->data;
        }
        if(st.find(firstHead) == st.end()){
            st.insert(firstHead);
            firstHead = firstHead -> next;
        }else{
            return firstHead->data;
        }
    }
    while(firstHead != NULL){
        if(st.find(firstHead) == st.end()){
            st.insert(firstHead);
            firstHead = firstHead -> next;
        }else{
            return firstHead->data;
        }
    }
    while(secondHead != NULL){
        if(st.find(secondHead) == st.end()){
            st.insert(secondHead);
            secondHead = secondHead->next;
        }else{
            return secondHead->data;
        }
    }
    return -1;
}
