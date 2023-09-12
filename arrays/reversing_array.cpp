#include <iostream>
using namespace std;

int printArray(int arr[], int size){
    for(int i = 0; i < size;i++){
        cout<<arr[i]<<" ";
    }
};

int reverseArray(int arr[], int size){
    int start= 0;
    int end= size-1;
    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    };
    cout<<printArray(arr, size);
}
int main(){
    int arr_even[10]={0,1,2,3,4,5,6,7, 8, 9};
    int arr_odd[9]={1,2,3,4,5,6,7, 8, 9};

    printArray(arr_even, 10);
    cout<<endl;
    printArray(arr_odd, 9);
    cout<<endl;
    reverseArray(arr_even, 10);
    cout<<endl;
    reverseArray(arr_odd, 9);
    return 0;
}