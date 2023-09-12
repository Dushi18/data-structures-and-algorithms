#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;

    cout<<"converting to binary"<<endl;
    int i=0;
    int ans=0;
    while (num!=0)
    {
        int bit= num&1;
        ans= (bit *pow(10, i))+ans;
        i++;
        num = num>>1;
    }
    cout<<"binary is "<<ans<<endl;
    return 0;
}