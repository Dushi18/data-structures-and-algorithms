#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    int i=2;
    while (a>i)
    {
        if (a%i==0)
        {
            cout<<"this is not a prime number"<<endl;   
            break;
        }
        else
        {
            i=i+1;
            if (i==a)
            {
                cout<<"this is a prime number"<<endl;
            }
            
        }
        
        
        
    }
    return 0;
}