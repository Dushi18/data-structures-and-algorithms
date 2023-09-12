#include <iostream>
using namespace std;


class Stack{
    public:
    int top;
    int *arr;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int data){
        if(size-top>1){
            top++;
            arr[top] = data;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top>=0){
            return false;
        }
        else{
            return true;
        }
    }
};
int main(){

    Stack s1(5);
    s1.push(10);
    s1.push(20);
    cout<<s1.peek()<<endl;
    s1.pop();
    cout<<s1.peek()<<endl;
    cout<<s1.isEmpty()<<endl;
    return 0;
}