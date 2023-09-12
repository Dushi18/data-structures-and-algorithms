#include <iostream>
using namespace std;

int sumArray(int arr[],int size ){
    int sum=0;
    for(int i=0;i<size;i++){
        sum =sum+arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    };
    int sum = sumArray(arr ,size);
    cout<<"sum of all elements of array "<<sum<<endl;
    return 0;
}