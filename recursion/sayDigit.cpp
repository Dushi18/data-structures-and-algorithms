#include <iostream>
using namespace std;

void sayDigit(string arr[], int n){
    if(n==0){
        return ;
    }

    int digit = n%10;
    n= n/10;
    sayDigit(arr, n);
    cout<<arr[digit]<<" ";
}

int main(){
    string arr[]= {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    sayDigit(arr, n);
    return 0;

}