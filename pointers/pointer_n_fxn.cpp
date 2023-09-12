#include <iostream>
using namespace std;

void update_ptraddress(int *ptr){
    ptr = ptr+1;
    cout<<"ptr in fxn "<<ptr<<endl;
}
void update_ptrvalue(int *ptr){
    *ptr = *ptr +1;
    cout<<"value in fxn "<<*ptr<<endl;
}
int arraySum(int *arr, int n){
    //the pointer of first location is passed into fxn instead of whole array
    int sum =0;
    for(int i=0; i<n; i++){
        sum =sum +arr[i];
    }
    return sum;
}
int main(){
    int value=5;
    int *ptr = &value;
    cout<<"before ptr "<<ptr<<endl;
    update_ptraddress(ptr);
    cout<<"after ptr "<<ptr<<endl;
    cout<<"before value "<<*ptr<<endl;
    update_ptrvalue(ptr);
    cout<<"after value "<<*ptr<<endl;
    int arr[]={1,2,3,4,5};
    cout<<arraySum(arr+2, 3);
    return 0;
}