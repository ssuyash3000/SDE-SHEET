#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool detectCycle(Node *head)
{
//     map<Node*, bool> mp;
//     while(head != NULL){
//         if(mp[head] == true){
//             return true;
//         }
//         mp[head] = true;
//         head = head -> next;
//     }
//     return false;
    if(head == NULL)
        return false;
	  Node* slow = head;
    Node* fast = head;
    while(fast != NULL and fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}
