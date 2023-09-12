#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"enter no. of rows"<<endl;
    cin>>m;
    cout<<"enter no. of cols"<<endl;
    cin>>n;
    //creation of 2d array
    int **arr= new int*[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }
    //taking input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //deleting up the space now
    for (int i = 0; i < m; i++)
    {
        delete [] arr[i];
    };
    delete [] arr;

    return 0;
}