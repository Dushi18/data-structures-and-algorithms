#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter no. of rows"<<endl;
    cin>>m;

    int **arr= new int*[m];
    int *sizes = new int[m];
    for (int i = 0; i < m; i++)
    {
        cout<<"enter no. of cols for "<<i<< "row"<<endl;
        cin>>sizes[i];
        arr[i]= new int[sizes[i]];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            cin>>arr[i][j];
        }
        
    };
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
        
    };

    for (int i = 0; i < m; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] sizes;
    
    
    return 0;
}