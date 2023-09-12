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
Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp;
};
Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
};
Node* deletion(Node* root, int val){
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        //3 cases of deletion
        if(root->right==NULL&& root->left==NULL){
            delete root;
            return NULL;
        }
        if(root->right!=NULL&& root->left==NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if(root->right==NULL&& root->left!=NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->right!=NULL&& root->left!=NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deletion(root->right, mini);
            return root;
        }
    }
    else if(root->data>val){
        root->left =  deletion(root->left, val);
        return root;
    }
    else{
        root->right = deletion(root->right, val);
        return root;
    }

};

int main(){
    Node* root = NULL;
    takeInput(root);
    cout<<"level order traversal :"<<endl;
    levelOrderTraversal(root);
    cout<<"inorder traversal :"<<endl;
    inOrder(root);

    cout<<endl<<"max value of this tree is :"<<maxVal(root)->data<<endl;
    cout<<"min value of this tree is :"<<minVal(root)->data<<endl;

    root = deletion(root, 100);
    cout<<"deletion......."<<endl;
    cout<<"level order traversal :"<<endl;
    levelOrderTraversal(root);
    cout<<"inorder traversal :"<<endl;
    inOrder(root);

    cout<<endl<<"max value of this tree is :"<<maxVal(root)->data<<endl;
    cout<<"min value of this tree is :"<<minVal(root)->data<<endl;
    return 0;
}