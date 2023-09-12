#include <iostream>
using namespace std;

int setBits(int n){
    int count =0;
    while (n!=0)
    {
        if (n&1)
        {
            count = count +1;
        }
        n= n>>1;
    }
    return count;
}
int main(){
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    int bits_a = setBits(a);
    cout<<"no. of set bits in a are "<<bits_a<<endl;
    int bits_b = setBits(b);
    cout<<"no. of set bits in b are "<<bits_b<<endl;
    return 0;
}