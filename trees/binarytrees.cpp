#include<iostream>
#include <queue>
using namespace std;

class Node{
    public: 
        int data;
        Node* left;
        Node* right;
        Node* root;

        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* binaryTree(Node* root){
    cout<<"enter data of node"<<endl;
    int data;
    cin >> data;
    root = new Node(data);

    if(data ==-1){
        return NULL;
    }

    cout<<"left child of node "<<root->data<<endl;
    root->left = binaryTree(root->left);
    cout<<"right child of node "<<root->data<<endl;
    root->right = binaryTree(root->right);

    return root;
};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

        
    }
};
void inorder(Node* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
};
Node* buildFromLevelOrder(Node* root){
    queue<Node*>q;
    int node;
    cout<<"enter data for root"<<endl;
    cin>>node;
    root = new Node(node);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"enter data for left child of "<<temp->data<<endl;
        int leftChild;
        cin>>leftChild;
        if (leftChild!=-1)
        {
            temp->left = new Node(leftChild);
            q.push(temp->left);
        }
        cout<<"enter data for right child of "<<temp->data<<endl;
        int rightChild;
        cin>>rightChild;
        if (rightChild!=-1)
        {
            temp->right = new Node(rightChild);
            q.push(temp->right);
        }
        
    }
    return root;
}
int main(){
    Node* root = NULL;
    // root = binaryTree(root);
    root = buildFromLevelOrder(root);
    levelOrderTraversal(root);
    cout<<"inorder traversal of this tree is: ";
    inorder(root);
    return 0;
}