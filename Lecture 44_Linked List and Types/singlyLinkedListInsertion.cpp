#include <bits/stdc++.h>
using namespace std;

class newNode
{
public:
    int data;
    newNode *next;

    newNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(newNode *&head, int d)
{
    newNode *temp = new newNode(d);

    temp->next = head;
    head = temp;
}

void insertAtTail(newNode *&tail, int d)
{
    newNode *temp = new newNode(d);

    tail->next = temp;
    tail = temp;
}

void insertAt(newNode *&tail, newNode *&head, int pos, int d)
{
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }

    newNode *temp = head;
    int cnt = 1;

    while (cnt != pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    newNode *node = new newNode(d);
    node->next = temp->next;
    temp->next = node;
}

void printList(newNode *&head)
{

    newNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -->";
        temp = temp->next;
    }

    cout << "NULL";
}

int main()
{
    newNode *n = new newNode(123);

    newNode *head = n;
    newNode *tail = n;
    printList(head);

    cout << "\n";

    insertAtTail(tail, 20);
    insertAtTail(tail, 15);
    printList(head);

    cout << "\n";

    insertAt(tail, head, 4, 97);
    printList(head);

    return 0;
}