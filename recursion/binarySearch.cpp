#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key){
    if(start>end){
        return 0;
    }
    int mid = start- (start-end)/2;
    if (arr[mid]==key){
        return 1;
    }
    if (arr[mid]>key)
    {
        return binarySearch(arr, start, mid-1, key);
    }
    else{
        return binarySearch(arr, mid+1, end, key);
    }
    
    
    
}
int main(){
    int arr[]={12, 23, 46, 56, 77, 88};
    int start = 0;
    int size =  6;
    int end= size-1;
    int key;
    cin >> key;
    if (binarySearch(arr, start, end , key))
    {
        cout<<"element is prsesnt"<<endl;
    }
    else{
        cout<<"element is not prsesnt"<<endl;
    }
    
}