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
};

void insertAtHead(Node* &head, int data){
    if (head==NULL)
    {
        Node* newNode = new Node(data);
        return;
    }
    else
    {
        Node* newNode = new Node(data);
        head->previous = newNode;
        newNode->next = head;
        head= newNode;
    }
};

void insertAtTail(Node* &tail, int data){
    if (tail==NULL)
    {
        Node* newNode = new Node(data);
        return ;
    }
    else
    {
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->previous = tail;
        tail = newNode;
    }
    
};
void insertAtPose(Node* &head, Node* &tail, int data, int pos){
    if (pos==1)
    {
        insertAtHead(head, data);
        return ;
    }
    Node* temp = head;
    int count =1;
    while (count<pos-1)
    {
        temp = temp->next;
        count++;
    }
    if (temp==NULL)
    {
        insertAtTail(tail, data);
        return ;
    }
    else
    {
        Node* nodeToInsert = new Node(data);
        nodeToInsert->next = temp->next;
        nodeToInsert->previous = temp;
        temp->next = nodeToInsert;
        temp->next->previous = nodeToInsert;
    }
}
void print(Node* head){
    if (head==NULL)
    {
        cout<<"empty list"<<endl;
    }
    
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}
Node* reverse(Node* &head){
    if (head==NULL)
    {
        return NULL;
    }
    Node* temp =head->next;
    head->next = head->previous;
    head->previous = temp;
    if (!head->previous)
    {
        return head;
    }
    return reverse(head->previous);
    
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 8);
    insertAtHead(head, 6);
    insertAtTail(tail, 12);
    insertAtPose(head, tail, 14, 5);
    insertAtPose(head, tail, 9, 3);
    insertAtPose(head, tail, 5, 1);
    print(head);
    cout<<head->data<<endl;
    reverse(head);
    print(head);
    return 0;
}