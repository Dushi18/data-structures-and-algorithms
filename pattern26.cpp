#include <iostream>
using namespace std;

int main(){
    int i =0, rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    while (i<rows)
    {
        int space =i;
        while (space)
        {
            cout<<"  ";
            space --;
        }

        int j=0;
        while (j<rows-i)
        {
            cout<<j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
        
    }
    
    return 0;
}