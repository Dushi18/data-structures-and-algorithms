#include<iostream>
using namespace std;

int main(){
    int i=0, rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    int value=1;
    while (i<rows)
    {
        int space = rows-i-1;
        while (space)
        {
            cout<<"  ";
            space--;
        }
        int j=0;
        while (j<=i)
        {
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}