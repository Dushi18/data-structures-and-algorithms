#include <iostream>
using namespace std;

int printSum(int arr[], int size){
    int sum=0;
    if (size == 0){
        return 0;
    }
    else
    {
        return printSum(arr+1, size-1)+arr[0];
    }
    


}
int main(){
    int arr[] = {1,2,3,4,5,6,7,0,5};
    int size = 9;
    cout<<printSum(arr, size)<<endl; 
    return 0;
}