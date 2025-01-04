#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};


void printList(Node* head){
    if(head == NULL)
        return NULL;

    Node *curr = head;

    do{
        cout << curr->data << " -> ";
        curr = curr->next;
    } while (curr != head);
}
int main()
{
    Node *node1 = Node(10);
    return 0;
}