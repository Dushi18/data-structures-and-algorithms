#include <iostream>
using namespace std;

int main(){
    int i=1, rows;
    cout<<"enter no. of rows "<<endl;
    cin>> rows;
    while (i<=rows)
    {   
        int j=1;
        while (j<=rows)
        {
            cout<<rows-j+1<<" ";
            j++;
        }cout<<endl;
        i++;        
    }
    
}