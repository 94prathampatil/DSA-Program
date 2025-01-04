#include<bits/stdc++.h>
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

Node *buildTree(Node *root)
{

    int data;
    cout << "Enter the data for the Root :- " << endl;
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for left insert:- " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the data for right insert:- " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void iterativeInorder(Node* &root){
    if(root == NULL){
        return;
    }

    queue<Node *> q;
    q.push(root);

    while(!q.empty()){
        Node *frontNode = q.front();
        q.pop();

        if(frontNode -> left){
            cout << frontNode->left->data << " ";
        }

        cout << frontNode->data << " ";

        if(frontNode -> right){
            cout << frontNode->right->data << " ";
        }

        if (frontNode->left){
            q.push(frontNode->left);
        }

        if(frontNode->right){
            q.push(frontNode->right);
        }
    }
}

int main()
{
    Node *root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 
     -1 -1 -1

    buildTree(root);

    iterativeInorder(root);
    return 0;
}