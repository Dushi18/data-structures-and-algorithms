#include <iostream>
using namespace std;

int main(){
    int i=0;
    int rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    while (i<rows)
    {
        int j=0;
        char ch= 'A'+rows-1-i;
        while (j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }cout<<endl;
        i++;
        
    }
    
    return 0;
}