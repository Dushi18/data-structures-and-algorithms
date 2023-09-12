#include <iostream>
using namespace std;

int main(){
    int i=1, rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    int count = 1;
    while (i<=rows)
    {
        int j=1;
        while (j<=rows)
        {
            cout<<count<<" ";
            j++;
            count++;    
        }cout<<endl;
    
    i++;
    }
    
}