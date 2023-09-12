#include <iostream>
using namespace std;

bool isBool(int i){
    int j;
    for(j = 2; j <i; j++){
        if(i%j == 0){
            return 0;
        }
    }
    return 1;
};

int main(){
    int a;
    cin >> a;
    if(isBool(a)){
        cout<<"is prime"<<endl;
    }
    else{
        cout<<"is not prime"<<endl;
    }
}