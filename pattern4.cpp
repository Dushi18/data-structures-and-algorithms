#include<iostream>
using namespace std;

int main(){
    int i=0, rows;
    cout << "enter no. of rows"<<endl;
    cin>>rows;
    while (i<rows)
    {   
        int j = 0;
        while (j<rows-i)
        {
            cout<<rows-i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<< "second pattern for rows  "<<rows<<endl;
    int a=1;
    while (a<=rows)
    {
        int j=0;
        while (j<=rows-a)
        {
            cout<<a<<" ";
            j++;
        }cout<<endl;
        a++;
    }
    
    
    return 0;
}