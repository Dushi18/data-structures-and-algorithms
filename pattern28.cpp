#include <iostream>
using namespace std;

int main(){
    int i=0;
    int rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    while (i<rows)
    {
        int space = rows-i-1;
        while (space)
        {
            cout<<"  ";
            space --;
        }
        int j =0;
        // int value =1;
        while (j<=i)
        {
            cout<<j+1<<" ";
            j++;
        }
        int k=0;
        int value2 =i;
        while (k<i)
        {
            cout<<value2<<" ";
            value2--;
            k++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;

}