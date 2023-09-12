#include <iostream>
using namespace std;

int main(){
    int rows;
    int i=0;
    int count =1;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    while (i<rows)
    {
        int j=0;
        while (j<=i)
        {
            cout<<count<<" ";
            j++;
            count++;
        }cout<<endl;
        i++;
        
    }
    
    return 0;
}