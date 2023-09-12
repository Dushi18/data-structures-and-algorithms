#include <iostream> 
using namespace std;


void update(int* j){
    *j  =*j+ 1;
}

int getSum(int* arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
    
}
int main(){
    int i = 5;
    int& j = i;
    j++;
    i++;
    cout<<i<<endl;
    update(&j);
    cout<<i<<endl;

    //creating dynamic size array
    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout <<getSum(arr, n)<<endl;
    return 0;
}