#include <iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    //new node constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if (this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory free for "<<value<<endl;
};
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void printLL(Node* &head){
    Node *temp = head;

    while (temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp = temp->next;
    }
    cout<<endl;
}

void insertAtPos(Node* &head, Node* &tail, int pos, int data){

    Node* temp = head;
    if (pos ==1)
    {
        insertAtHead(head, data);
        return ;
    }
    
    int count = 1;
    while (count<pos-1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return ;
    }
    
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node* &head,Node* &tail, int pos){
    if(pos==1){
        Node* temp = head;
        head = temp->next;
        temp-> next = NULL;
        delete temp;
    }
    else
    {
        Node* previous = NULL;
        Node* current = head;
        int count = 1;
        while (count<pos)
        {
            previous = current;
            current = current->next;
            count++;
        }
        if (current->next==NULL)
        {
            tail = previous;
        }
        
        previous->next = current->next;
        current->next = NULL;
        delete current;
        
    }
    
};
bool isCircular(Node* head){
    if(head==NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp!=head && temp!=NULL){
        temp = temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
};

bool detectCycle(Node* head){
    if (head==NULL)
    {
        return false;
    }
    
    Node* temp = head;
    map<Node*, bool> visited;
    while (temp!=NULL)
    {
        if (visited[temp]==true)
        {
            // cout<<"Cycle detected"<<endl;
            return true;
        }
        visited[temp]=true;
        temp = temp->next;
    }
    return false;
    
}
 
Node* floydDetection(Node* &head){
    if (head==NULL)
    {
        return NULL;
    }
    
    Node* fast = head;
    Node* slow = head;
    while (fast!=NULL&&slow!=NULL)
    {
        fast = fast->next;
        if (fast!=NULL)
        {
            fast= fast->next;
        }
        slow = slow->next;

        if (fast==slow)
        {
            return fast;
        }
    }
    return NULL;
};

Node* startNodeDetection(Node* &head){

    if (head==NULL)
    {
        return NULL;
    }
    
    Node* slow = head;
    Node* intersection = floydDetection(head);
    if (intersection==NULL)
    {
        return NULL;
    }
    else
    {
        while (slow!=intersection)
        {
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
    }
    
    
};
void removeLoop(Node* head){
    if (head==NULL)
    {
        return;
    }
    Node* startOfLoop = startNodeDetection(head);
    Node* temp = startOfLoop;
    while (temp->next!= startOfLoop)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    temp->next = NULL;
}
int main(){
    Node* node1 = new Node(12);
    // cout<<node1->data<<endl;
    Node* head = node1;
    Node* tail = node1;
    // printLL(head);
    insertAtTail(tail, 24);
    // printLL(head);
    insertAtTail(tail, 36);
    // printLL(head);
    insertAtHead(head, 6);
    // printLL(head);
    insertAtPos(head, tail, 4, 30);
    // printLL(head);
    insertAtPos(head, tail, 6, 42);
    // printLL(head);
    insertAtPos(head, tail, 1, 3);
    // printLL(head);
    deleteNode(head,tail, 1);
    // printLL(head);
    deleteNode(head,tail, 6);
    // printLL(head);
    deleteNode(head,tail, 3);
    printLL(head);
    tail->next= head->next;
    // cout<<head->data<<" "<<tail->data<<endl;
    // if(detectCycle(head)){
    //     cout<<"detected"<<endl;
    // }
    // else{
    //     cout<<"not detected"<<endl;
    // }
    if (floydDetection(head)!=NULL)
    {
        cout<<"loop detected"<<endl;
    }
    else{
        cout<<"loop not detected"<<endl;
    }

    Node* startingNode = startNodeDetection(head);
    if (startingNode!=NULL)
    {
        cout<< "Loop started at "<<startingNode->data<<endl;
    }
    else{
        cout<<"no loop"<<endl;
    }
    removeLoop(head);



    printLL(head);
    if (floydDetection(head)!=NULL)
    {
        cout<<"loop detected"<<endl;
    }
    else{
        cout<<"loop not detected"<<endl;
    }
    
    return 0;
}