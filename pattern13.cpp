#include <iostream>
using namespace std;

int main(){
    char ch='A';
    // char ch=65;

    int i=0, rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    while (i<rows)
    {
        int j=0;
        while (j<rows)
        {
            cout << ch<<" ";
            j++;
        }cout<<endl;
        i++;
        ch++;
    }
    
}