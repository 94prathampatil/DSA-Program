#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void inOrder(Node *root)
{
    // Base Condition
    if (root == NULL)
    {
        return;
    }

    // Recursive call for left node
    inOrder(root->left);

    // Print node data
    cout << root->data << " ";

    // Recursive call for right node
    inOrder(root->right);
}

Node *sucessorOfNode(Node *root, int tNode)
{
    Node *succ = NULL;

    while (root != NULL)
    {

        if (tNode >= root->data)
        {
            root = root->right;
        }
        else
        {
            succ = root;
            root = root->left;
        }
    }

    return succ;
}

Node *predOfNode(Node *root, int tNode)
{
    Node *pred = NULL;

    while (root != NULL)
    {
        // cout << "InLOOP" << endl;
        if (tNode <= root -> data)
        {
            root = root->left;
        }
        else
        {
            pred = root;
            root = root->right;
        }
    }

    return pred;
}

int main()
{
    Node *root = NULL;

    cout << "Enter data to create BST: ";
    takeInput(root);

    inOrder(root);
    cout << "\n";

    cout << "Successor of given Node is: " << sucessorOfNode(root, 30)->data << "\n";

    cout << "Successor of given Node is : " << predOfNode(root, 30)->data << "\n";
    return 0;
}