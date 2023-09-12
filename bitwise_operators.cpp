#include <iostream>
using namespace std;

int main(){
    int a=15;
    int b=9;

    cout<<"a&b: "<<(a&b)<<endl;
    cout<<"a|b: "<<(a|b)<<endl;
    cout<<"~a: "<<(~a)<<endl;
    cout<<"a^b: " <<(a^b)<<endl;
//right shift operator
    cout<<(17>>2)<<endl;
    cout<<(23>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(23>>2)<<endl;
    //left shift opertor
    cout<<(23<<2)<<endl;

    //preincrement and post decrement
    int n= 18;
    cout <<n++<<endl;
    cout <<--n<<endl;
    cout <<n--<<endl;
    cout <<++n<<endl;
    cout <<n<<endl;
    return 0;
}