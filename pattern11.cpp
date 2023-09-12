#include<iostream>
using namespace std;

int main(){
    int i=0, rows;
    cout<<"enter no. of rows"<<endl;
    cin>> rows;
    while (i<rows)
    {
        int j=0;
        int count= i+1; 
        while (j<=i)
        {
            cout<<count<<" ";
            j++;
            count++;
        }cout<<endl;
        i++;
        
    }
    
}