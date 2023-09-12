#include <iostream>
using namespace std;
bool searchArray(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (key==arr[i])
        {
            return 1;
        }
    }
    return 0;
    
}
int main(){
    int key;
    int arr[10]= {1, -12, 34, 56, 74, 776, 32, 0, -9, 3};
    cout<<"enter the no. you want to search in your array"<<endl;
    cin>>key;

    bool found = searchArray(arr,10, key);
    if(found){
        cout<<"no. is present"<<endl;
    }
    else{
        cout<<"no. is not present"<<endl;
    }
    return 0;
}