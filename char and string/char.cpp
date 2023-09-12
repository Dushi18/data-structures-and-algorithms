#include<iostream>
using namespace std;
int getLength(char arr[]){
    int count =0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}

void reverseName(char arr[], int n){
    int start=0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    cout<<getLength(name)<<endl;
    reverseName(name, getLength(name));
    cout<<name<<endl;
    return 0;
}