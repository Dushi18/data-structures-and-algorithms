#include<iostream>
using namespace std;

int main(){
    int rows;
    int i=0;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    while (i<rows)
    {
        int j=0;
        while (j<=i)
        {
            cout<<i+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}