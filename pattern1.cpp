#include <iostream>
using namespace std;

int main(){

    int i=1;
    int num;
    cout<<"enter no. of rows"<<endl;
    cin>>num;
    while (i<=num)
    {
        int j=1;
        while (j<=num)
        {
            cout<<"* ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
    return 0;
}