#include <iostream>
using namespace std;

int main(){
    int num, i;
    cout<<"enter a number"<<endl;
    cin>>num;
    
    if (num==1)
    {
        cout<<"this is neither prime nor composite"<<endl;
    }
    
    for ( i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            cout<<"this is not a prime number"<<endl;
            break;
        }
        
    }
    // cout<<i<<endl;
    if (i==num )
    {
        cout<<"this is a prime number"<<endl;
    }
    
    return 0;
}