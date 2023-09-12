#include <iostream>
using namespace std;

int pivotElem(int arr[], int n){
    int start=0;
    int end = n-1;
    int mid;
    while(start<end){
        mid = start-(start-end)/2;
        if(arr[mid]<arr[0]){
            end=mid;
        }
        else{
            start=mid+1;
        }
    }
    return start;
}
int binarySearch(int arr[], int start, int end, int k){
    int ans;
    while(start<=end){
        int mid = start-(start-end)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if (arr[mid]>k){
            end= mid-1;
        }
        else{
            start=mid+1;
        }
    }
    if(arr[start]==k){
        return start;
    }
    else{
        return -1;
    }
    return start;
}
int main(){
    int arr[]= {8,9,4,5};
    int pivot = pivotElem(arr, 4);
    cout<<pivot<<endl;
    int search = binarySearch(arr,2,3,4);
    cout<<search<<endl;
}