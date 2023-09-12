#include <iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid= s-(s-e)/2;
    int len1= mid-s+1;
    int len2 = e-mid;
    int *arr1= new int[len1];
    int *arr2 = new int[len2];

    int mainArrayIndex =s;

    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i]= arr[mainArrayIndex++];
    }
    //merge now 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while (index1<len1&&index2<len2)
    {
        if (arr1[index1]<arr2[index2])
        {
            arr[mainArrayIndex++]=arr1[index1++];
        }
        else{
            arr[mainArrayIndex++] = arr2[index2++];
        }
        
    }
    while (index1<len1)
    {
        arr[mainArrayIndex++]= arr1[index1++];
    }
    while (index2<len2)
    {
        arr[mainArrayIndex++]= arr2[index2++];
    }
    
    delete [] arr1;
    delete [] arr2;
    
}
void mergeSort(int arr[], int s, int e){
    if (s>=e)
    {
        return ;
    }
    int mid = s-(s-e)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main(){
    int arr[]= {23, 4,5, 11,9};
    int size = 5;
    int start=0;
    int end = size-1;
    mergeSort(arr, start, end);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}