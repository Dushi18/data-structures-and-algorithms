#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size==1||size==0) return 1;
    if(arr[0]<arr[1]){
        return isSorted(arr+1, size-1);
    }
    else{
        return 0;
    }
}

int main(){
    int arr[]={12, 34, 56, 67, 78, 12};
    int size = 6;
    if (isSorted(arr, size))
    {
        cout<<"sorted array"<<endl;
    }
    else
    {
        cout<<"unsorted array"<<endl;
    }
    
    
    return 0;
}