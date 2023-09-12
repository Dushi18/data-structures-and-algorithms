#include <iostream>
using namespace std;

int printArray(int arr[], int n){
    cout<<"printing an array"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    };
    cout<<endl<<"printing done"<<endl;
}
int main(){
    int arr1[5]={0};
    printArray(arr1, 5);
    int arr2[10]={1,2,3,4,5,};
    printArray(arr2, 10);
    return 0;
}