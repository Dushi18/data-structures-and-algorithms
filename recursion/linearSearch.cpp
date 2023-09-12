#include <iostream>
using namespace std;

bool isFound(int arr[], int size, int key){
    if (size==0)
    {
        return 0;
    }
    if (arr[0]== key)
    {
        return 1;
    }
    else{
        return isFound(arr+1, size-1, key);

    }
    
    
}
int main(){
    int arr[]= {0,1,2,3,4,5,6,7};
    int size = 8;
    int key;
    cin>>key;

    if(isFound(arr, size, key)){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;
    }
    return 0;
}