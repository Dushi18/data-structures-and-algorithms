#include <iostream>
using namespace std;

int hcf(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while (a!=b)
    {
        if(a>b){
            a= a-b;
        }
        else{
            b= b-a;
        }
    }
    return a; 
}

int main(){
    int a, b;
    cout<<"enter two no.s to calculate HCF"<<endl;
    cin>>a>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    int gcd = hcf(a, b);
    cout<<"HCF of these no. s is "<<gcd<<endl;
    return 0;
}