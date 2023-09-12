#include <iostream>
using namespace std;

int main(){
    int arr[5]={0};
    cout<<"printing the array"<<endl;
    // cout<<sizeof(arr)/sizeof(int)<<endl;
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout<<arr[i]<<" ";
    };
    cout<<endl;
    int arr2[5]={1};
    for(int i = 0; i < sizeof(arr2)/sizeof(int); i++){
        cout<<arr2[i]<<" ";
    }
    
    
    return 0;
}