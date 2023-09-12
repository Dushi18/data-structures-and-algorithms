#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* previous;

    Node(int data){
        this->data = data;
        this->next =NULL;
        this->previous =NULL;
    }
    ~Node(){
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<< "memory free for "<<value<<endl;
        
    }
};

void print(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
};

int lengthOfList(Node* &head){
    Node* temp = head;
    int count = 0;
    while (temp!=NULL)
    {
        temp = temp->next;
        count ++;
    }
    return count;
};

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(data);
        temp->next = head;
        head->previous = temp;
        head = temp;
    }
};

void insertAtTail(Node* &head, Node* &tail, int data){

    if(tail==NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(data);
        tail->next = temp;
        temp->previous = tail;
        tail = temp;
    }
};

void insertAtPos(Node* &head, Node* &tail, int pos,  int data){

    if (pos==1)
    {
        insertAtHead(head, tail, data);
        return ;
    }
    
    Node* nodeToInsert = new Node(data);
    Node* temp = head;
    int count = 1;
    while (count<pos-1)
    {
        temp = temp->next;
        count++;

    }
    if (temp->next==NULL)
    {
        insertAtTail(head, tail, data);
        return ;
    }
    
    nodeToInsert->previous = temp;
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    temp->next->previous = nodeToInsert;
    
};

void deleteNode(Node* &head, Node* &tail, int pos){
    if(pos==1){
        Node* temp = head;
        temp->next->previous= NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* current = head;
        Node* preCurrent = NULL;
        int count = 1;
        while (count<pos)
        {
            preCurrent = current;
            current = current->next;
            count++;
        }

        if (current->next==NULL)
        {
            cout<<"at last node"<<endl;;
            tail = preCurrent;
            preCurrent->next = current->next;
            current->previous = NULL;
        }
        else{
            preCurrent->next = current->next;
            current->next->previous = preCurrent;
            current->next = NULL;
            current->previous = NULL;

        }
        

        delete current;
    }
}



int main(){
    // Node* node1 = new Node(12);
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 24);
    print(head);
    // insertAtHead(head, 24);
    // print(head);
    insertAtHead(head, tail, 36);
    print(head);
    cout<<lengthOfList(head)<<endl;
    insertAtTail(head, tail, 6);
    print(head);
    insertAtPos(head, tail, 3, 18);
    print(head);
    insertAtPos(head, tail, 1, 54);
    print(head);
    insertAtPos(head, tail, 2, 48);
    print(head);
    // cout<<lengthOfList(head)<<endl;
    insertAtPos(head, tail, 7, 3);
    print(head);
    insertAtPos(head, tail, 8, 2);
    print(head);
    insertAtPos(head, tail, 9, 1);
    print(head);
    cout<<"head "<<head->data<<" tail "<<tail->data<<endl;
    // cout<<"head "<<head->data<<" tail "<<tail->data<<endl;
    deleteNode(head, tail, 2);
    print(head);
    cout<<"head "<<head->data<<" tail "<<tail->data<<endl;
    deleteNode(head, tail, 7);
    print(head);
    deleteNode(head, tail, 1);
    print(head);
    deleteNode(head, tail,6);
    print(head);
    cout<<"head "<<head->data<<" tail "<<tail->data<<endl;

    return 0;
}
