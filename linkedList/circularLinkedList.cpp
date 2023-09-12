#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next =NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }       
        cout<<"memory free for "<<value<<endl; 
    }
};

void insert(Node* &tail, int element, int data){
    if(tail==NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node* current = tail;
        while (current->data!=element)
        {
            current = current->next;
        }
        Node* temp = new Node(data);
        temp->next = current->next;
        current->next = temp;
    }
    
};
void print(Node* &tail){
    if (tail==NULL)
    {
        cout<<"empty list"<<endl;
    }
    
    Node* temp = tail;
    do{
        // cout<<"hi"<<" "<<endl;
        cout<<tail->data<<" ";
        tail = tail->next;
    }while (tail!= temp);
    cout<<endl;
};

void deleteNode(Node* &tail, int value){
    Node* prev = tail;
    Node* current = tail->next;
    while (current->data!=value)
    {
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    if (prev == current)
    {
        tail = NULL;
    }
    
    else if(current == tail)
    {
        tail = prev;
    }
    current->next = NULL;
    delete current;
    
};

int main(){
    Node* tail = NULL;
    insert(tail, 5, 10 );
    print(tail);
    cout<<"tail is "<<tail->data<<" "<<endl;
    insert(tail, 10, 20);
    print(tail);
    cout<<"tail is "<<tail->data<<" "<<endl;
    insert(tail, 10, 15);
    print(tail);
    cout<<"tail is "<<tail->data<<" "<<endl;
    insert(tail, 20, 25);
    insert(tail, 25, 30);
    insert(tail, 30, 35);
    insert(tail, 35, 40);
    insert(tail, 40, 45);
    print(tail);
    deleteNode(tail, 45);
    print(tail);
    deleteNode(tail, 10);
    print(tail);
    cout<<"tail is "<<tail->data<<" "<<endl;
    deleteNode(tail, 25);
    print(tail);
    deleteNode(tail, 20);
    print(tail);
    deleteNode(tail, 15);
    print(tail);
    deleteNode(tail, 35);
    print(tail);
    deleteNode(tail, 40);
    print(tail);
    cout<<"tail is "<<tail->data<<" "<<endl;
    deleteNode(tail, 30);
    print(tail);
    
    return 0;
}