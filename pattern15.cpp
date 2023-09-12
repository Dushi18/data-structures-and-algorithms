#include <iostream>
using namespace std;

int main(){
    int i=0, rows;
    char ch='A';
    cout<<"enter no. of rows"<<endl;
    cin>> rows;
    while (i<rows)
    {
        int j=0;
        while (j<rows)
        {
            cout<<ch<<" ";
            j++;
            ch++;
        }cout<<endl;
        i++;
    }
    
    return 0;

}