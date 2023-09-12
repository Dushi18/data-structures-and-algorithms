#include <iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot = start;
    int count =0;
    for (int i = start+1; i <= end; i++)
    {
        if (arr[i]<=arr[pivot])
        {
            count++;
        }
        
    }
    int pivotIndex = pivot + count;
    swap(arr[pivot],arr[pivotIndex]);
    int i = start;
    int j = end;

    while (i<pivotIndex&&j>pivotIndex)
    {
        while (arr[i]<=arr[pivotIndex])
        {
            i++;
        }
        while (arr[j]>arr[pivotIndex])
        {
            j--;
        }
        if (i<pivotIndex&&j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotIndex;
    
};

void quickSort(int arr[], int start, int end){
    if (start>=end)
    {
        return ;
    }
    int part = partition(arr, start, end);
    cout<<part<<endl;
    quickSort(arr, start, part-1);
    quickSort(arr, part+1, end);
};

int main(){
    int arr[]={12, 5, 67, 5, 32};
    int size= 5;
    int start =0;
    int end = size-1;
    quickSort(arr, start, end);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
