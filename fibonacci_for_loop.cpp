#include <iostream>
using namespace std;

int main(){
    int num, next;
    int a=0;
    int b=1;
    cout<< "enter a number"<<endl;
    cin>>num;
    

    for (int i = 0; i < num; i++)
    {
        
        if (i==0)
        {
            cout<<a<<endl;
        }
        else if (i==1)
        {
            cout<<b<<endl;
        }
        
        else
        {
            next=a+b;
            cout<<next<<endl;
            a=b;
            b=next;
            
        }
        
        
    }
    
    return 0;
}