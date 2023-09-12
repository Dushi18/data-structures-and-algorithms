#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    int i=0;
    while (i<rows)
    {
        int value = i+1;
        int j=0;
        while (j<=i)
        {
            cout<<value<<" ";
            j++;
            value--;
        }cout<<endl;
        i++;
        
    }
    
}