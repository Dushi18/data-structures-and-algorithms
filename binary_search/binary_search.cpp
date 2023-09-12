#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end= size-1;
    while (start<=end)
    {
        int mid=start+ (end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end= mid-1;
        }
        if (arr[mid]<key){
            start= mid+1;
        }
        
    }
    return -1;
    
}

int main(){
    int evenArr[6]= {45, 47, 89, 92, 94, 95};
    int oddArr[5]= {5, 7, 8, 9, 11 };

    int searchEven = binarySearch(evenArr, 6, 94);
    cout<<"position of 94 in even array is "<<searchEven<<endl; 
    int searchOdd = binarySearch(oddArr, 5, 12);
    cout<<"position of 12 in odd array is "<<searchOdd<<endl; 

}