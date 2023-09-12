#include <iostream>
using namespace std;
int ap(int n){
    int c=3*n+7;
    // cout<<endl;
    return c;
};
int main(){
    int n;
    cout<<"enter the value of n for ap"<<endl;
    cin>>n;
    int term = ap(n);
    cout<<"nth term of this ap is "<<term<<endl; 
    return 0;
}