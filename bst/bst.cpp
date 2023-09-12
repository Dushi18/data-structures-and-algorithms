#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }    
};

Node* insertToBST(Node* root, int data){
    if(root==NULL){
        root = new Node(data);
        return root;
    }
    if(data>root->data){
        root->right = insertToBST(root->right, data);
    }
    else{
        root->left = insertToBST(root->left, data);
    }
    return root;
};

void takeInput(Node* &root){
    int data;
    cout<<"enter data to create BST"<<endl;
    cin>>data;
    while(data!=-1){
        root = insertToBST(root, data);
        cin>>data;
    }
};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    cout<<root->data<<endl;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
};

void inOrder(Node* root){
    if(root == NULL){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main(){
    Node* root = NULL;
    takeInput(root);
    cout<<"level order traversal of this BST is: "<<endl;
    levelOrderTraversal(root);
    cout<<"inorder traversal of this BST is: "<<endl;
    inOrder(root);
    return 0;
}