/*
    L --> Left
    R --> Right
    N --> Node
*/
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }


};

Node* buildTree(Node* root){

    int data;
    cout << "Enter the data for the Root :- " << endl;
    cin >> data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data for left insert:- " << data << endl;
    root -> left = buildTree(root -> left);

    cout << "Enter the data for right insert:- " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
}

// Inorder Traversal --- LNR
void inOrder(Node* root){
    // Base Condition
    if(root == NULL){
        return;
    }

    // Recursive call for left node
    inOrder(root -> left);

    // Print node data
    cout << root -> data << " ";

    // Recursive call for right node
    inOrder(root -> right);
}

// Preorder Traversal --- NLR
void preOrder(Node* root){
    // Base Condition
    if(root == NULL){
        return;
    }

    // Print node data
    cout << root -> data << " ";

    // Recursive call for left node
    preOrder(root -> left);


    // Recursive call for right node
    preOrder(root -> right);
}


// Postorder Traversal --- LRN 
void postOrder(Node* root){
    // Base Condition
    if(root == NULL){
        return;
    }

    // Print node data
    postOrder(root -> left);

    // Recursive call for right node
    postOrder(root -> right);
    

    // Recursive call for left node
    cout << root -> data << " ";
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        
    }
}

void builFromlevelOrder(Node* &root){
    // initialise the queue
    queue<Node*> q;

    int data;
    cout<<"Enter the data for the root:- ";
    cin >> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        cout<<"Enter the left data for :"<<temp -> data<<endl;
        int leftData;
        cin>>leftData;
        
        if(leftData != -1){
            // Add the data to q.front's left
            temp -> left = new Node(leftData);
            q.push(temp -> left);
        }

        cout<<"Enter the right data for :"<<temp -> data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            // Add the data to q.front's left
            temp -> right = new Node(rightData);
            q.push(temp -> right);
        }
    }
}

int main()
{
    Node* root = NULL;
    // root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    builFromlevelOrder(root);
    levelOrderTraversal(root);

    cout<<"Inorder Traversal: -\n"; 
    inOrder(root);
    cout<<endl;
    
    cout<<"Preorder Traversal: -\n"; 
    preOrder(root);
    cout<<endl;
    
    cout<<"Postorder Traversal: -\n"; 
    postOrder(root);

    return 0;
}