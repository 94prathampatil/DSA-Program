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

int miniFromBST(Node *root)
{
    if (root->left == NULL)
    {
        return root->data;
    }

    return miniFromBST(root->left);
}

int maxiFromBST(Node *root)
{
    if (root->right == NULL)
    {
        return root->data;
    }

    return maxiFromBST(root->right);
}

Node *deleteFromBST(Node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == val)
    {
        // Only one node
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // Either left node or right node
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->right != NULL && root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // Both Node are present
        if (root->left != NULL && root->right != NULL)
        {
            int mini = miniFromBST(root->right);
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }

    if (val < root->data)
    {
        root->left = deleteFromBST(root->left, val);
    }
    else
    {
        root->right = deleteFromBST(root->right, val);
    }

    return root;
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
        if (tNode <= root->data)
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

    cout << "Minimum element from BST is :" << miniFromBST(root) << "\n";
    cout << "Maximum element from BST is: " << maxiFromBST(root) << "\n";
    return 0;
}