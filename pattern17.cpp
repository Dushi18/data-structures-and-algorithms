#include <iostream> 
using namespace std;

int main(){
    int i=0, rows;
    cout<< "enter no. of rows"<< endl;
    cin>>rows;
    while (i<rows)
    {
        int j=0;
        while (j<=i)
        {
            cout<<char('A'+i)<<" ";
            j++;
        }cout<<endl;
        i++;
    }
    
    return 0;

}