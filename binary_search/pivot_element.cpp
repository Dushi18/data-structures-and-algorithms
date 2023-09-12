#include <iostream>
using namespace std;

int pivotElem(int arr[], int size){
    int start=0;
    int end =size-1;
    int mid;
    // cout<<"hi there"<<endl;
    while (start< end){
        mid = start +(end-start)/2;
        if (arr[mid]<arr[0])
        {
            end = mid;
            // cout<<"second line"<<endl;
        }
        else{
            start = mid + 1;
            // cout<<"first line"<<endl;
        }
    }
    // cout<<start<<endl;;
    return start;
    
};
int main(){
    int arr[9]={4, 5, 6, 7, 10, 13, 1, 2, 3};
    // cout<<"hi there"<<endl;
    int pivot = pivotElem(arr, 9);
    cout<<"pivot element index is "<<pivot<<endl;
    return 0;
}