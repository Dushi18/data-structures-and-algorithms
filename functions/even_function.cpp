#include <iostream>
using namespace std;

bool isEven(int x){
    if(x&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    if(isEven(a)){
        cout<<"even"<<endl;
    }
    else {
        cout<<"odd"<<endl;
    }
    return 0;
}