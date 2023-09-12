#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<< "enter the value of character"<<endl;
    cin>>ch;
    if (ch>=97&&ch<=122){
        cout<<"lowercase character"<<endl;
    }
    else if (ch>=65&&ch<=90)
    {
        cout<<"uppercase character"<<endl;
    }
    else if(ch>=48&&ch<=57)
    {
        cout<<"numerical value"<<endl;
    }
    else
    {
        cout<<"unknown character"<<endl;
    }
    
    
}