#include <iostream>
using namespace std;

int main(){
    int a, b;
    char op;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"enter the operation you want to perform"<<endl;
    cin>>op;
    switch (op)
    {
    case '+': cout<<a+b<<endl;
        break;
    case '-':cout<<a-b<<endl;
        break;
    case '*':cout<<a*b<<endl;
        break;
    case '/':cout<<a/b<<endl;
        break;
    
    default:
        break;
    }
    return 0;
}