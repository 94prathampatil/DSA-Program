#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *prev;
    int data;
    node *next;

    node(int data)
    {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Memory free for the deleted node with value:- " << value << "\n";
    }
};

void insertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    temp->prev = NULL;
    head = temp;
}

void insertAtTail(node *&tail, int d)
{
    node *temp = new node(d);

    tail->next = temp;
    temp->prev = tail;
    temp->next = NULL;
    tail = temp;
}

void insertAtPos(node *&tail, node *&head, int d, int pos)
{
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }

    node *temp = head;
    int cnt = 1;

    while (cnt < pos)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    node *newnode = new node(d);
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev = newnode;
    temp->next = newnode;
}

void deleteAtHead(node *&head)
{
    node *temp = head;

    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;
}
void deleteNodeAt(int pos, node *&head, node *&tail)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    else
    {
        node *pre = NULL;
        node *curr = head;

        int cnt = 1;
        while (cnt != pos)
        {
            pre = curr;
            curr = curr->next;
            cnt++;
        }

        if (curr == NULL)
        {
            pre->next = NULL;
            curr->prev = NULL;
            delete curr;
            tail = pre;
        }
        else
        {
            pre->next = curr->next;
            curr->next->prev = pre;
            curr->next = NULL;
            curr->prev = NULL;
            delete curr;
        }
    }
}

void printList(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int len(node *&head)
{
    node *temp = head;
    int cnt = 0;

    while (temp != NULL)
    {
        temp = temp->next;
    }

    return cnt;
}
int main()
{
    node *newNode = new node(10);
    node *head = newNode;
    node *tail = newNode;

    insertAtHead(head, 20);

    insertAtTail(tail, 30);

    insertAtPos(tail, head, 45, 2);
    printList(head);

    insertAtPos(tail, head, 56, 3);
    printList(head);

    insertAtPos(tail, head, 54, 4);
    printList(head);

    insertAtHead(head, 40);
    printList(head);

    deleteNodeAt(5, head, tail);
    printList(head);

    return 0;
}