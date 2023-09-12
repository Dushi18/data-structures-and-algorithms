#include <iostream>
using namespace std;

int factorial(int a){
    if(a==0){
        return 1;
    }
    else if(a==1){
        return 1;
    }
    else {
        return a*factorial(a-1);
    }
};

int nCr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n, r;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the value of r"<<endl;
    cin>>r;
    cout<<"the value of nCr is "<<nCr(n, r)<<endl;
}