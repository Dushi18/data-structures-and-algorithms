#include <iostream>
using namespace std;

int main(){
    int i=0, rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    while (i<rows)
    {
        int j=0;
        while (j<rows)
        {
            cout<<char('A'+j)<<" ";
            j++;
        }cout<<endl;
        i++;
    }
    
}