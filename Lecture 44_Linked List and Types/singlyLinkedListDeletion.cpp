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

    ~newNode()
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

void deleteNode(newNode *&head, newNode *&tail, int pos)
{
    if (pos == 1)
    {
        newNode *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        newNode *curr = head;
        newNode *prev = NULL;
        int cnt = 1;

        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if (curr->next == NULL)
        {
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
            tail = prev;
        }
        else
        {
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }
}
void printList(newNode *&head)
{
    
    for (newNode *temp = head; temp != NULL; temp = temp -> next){
        cout << temp->data << " -->";
    }
    cout << "NULL\n";
    // newNode *temp = head;

    // while (temp != NULL)
    // {
    //     cout << temp->data << " -->";
    //     temp = temp->next;
    // }

    // cout << "NULL";
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
    insertAt(tail, head, 4, 21);
    cout << "Before Node Deletion:-\n";
    printList(head);

    cout << "\nAfter Node Deletion:-\n";
    deleteNode(head, tail, 4);
    printList(head);
    cout << endl;
    cout << head->data << " " << tail->data;

    return 0;
}