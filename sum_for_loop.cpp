#include <iostream>
using namespace std;

int main(){
    int sum=0, num;
    cout<<"enter a no."<<endl;
    cin>>num;
    for ( int i = 1; i <=num; i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}