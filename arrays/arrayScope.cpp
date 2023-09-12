#include <iostream>
using namespace std;   

int arrayUpdate(int arr[], int size){
    arr[0]=120;
    cout<<"printing inside update function"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;;
}
int main(){
    int arr[5]= {1,2,3,4,5};

    arrayUpdate(arr, 5);
    cout<<"printing inside main function"<<endl;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}