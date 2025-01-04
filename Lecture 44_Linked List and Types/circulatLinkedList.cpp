#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node()
    {
        int val = this->data;

        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }

        cout << "Memore free for the deleted node with valued:- " << val << "\n";
    }
};

void insertNode(node *&tail, int d, int data)
{
    if (tail == NULL)
    {
        node *newNode = new node(d);
        newNode->next = newNode;
        tail = newNode;
        // cout << "Node Inserted at start....!" << "\n";
    }
    else
    {
        node *curr = tail;

        while (curr->data != data)
        {
            curr = curr->next;
        }
        node *newNode = new node(d);
        newNode->next = curr->next;
        curr->next = newNode;

        // cout << "Node Inserted...!" << "\n";
    }
}

void printList(node *tail)
{
    node *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(node *&tail, int data)
{
    if (tail->next == tail)
    {
        tail = NULL;
    }
    if (tail == NULL)
    {
        cout << "List is Empty...:(" << endl;
    }
    else
    {
        node *prev = tail;
        node *curr = prev->next;

        while (curr->data != data)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int lenOfList(node *tail)
{
    if (tail == NULL)
        return 0;

    node *curr = tail;
    int cnt = 0;
    do
    {
        cnt++;
        curr = curr->next;
    } while (curr != tail);

    return cnt;
}

void partitionList(node *&tail)
{
    if (tail == NULL)
        return;

    int len = lenOfList(tail);
    if (len & 1)
    {
        int part = len / 2 + 1;

        node *temp = tail;

        while (part != 1)
        {
            temp = temp->next;
            part--;
        }

        node *head2 = temp->next;
        while (head2->next != tail)
        {
            head2 = head2->next;
        }

        head2->next = temp->next;
        head2 = temp->next;

        temp->next = tail;
        tail = temp->next;

        printList(tail);
        printList(head2);
    }
    else
    {
        int part = len / 2;

        node *temp = tail;

        while (part != 1)
        {
            temp = temp->next;
            part--;
        }

        node *head2 = temp->next;
        while (head2->next != tail)
        {
            head2 = head2->next;
        }

        head2->next = temp->next;
        head2 = temp->next;

        temp->next = tail;
        tail = temp->next;

        printList(tail);
        printList(head2);
    }
}
int main()
{
    node *tail = NULL;
    insertNode(tail, 3, 0);
    printList(tail);

    insertNode(tail, 7, 3);
    printList(tail);

    insertNode(tail, 9, 7);
    printList(tail);

    insertNode(tail, 4, 3);
    printList(tail);

    insertNode(tail, 5, 4);
    printList(tail);

    insertNode(tail, 10, 9);
    printList(tail);

    partitionList(tail);

    return 0;
}
