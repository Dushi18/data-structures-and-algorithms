#include<iostream>
using namespace std;

int main(){
    int num = 5;
    int *p = &num;

    cout <<"value of num is "<<*p<<endl;
    cout <<"value of num address is "<<p<<endl;

    int *q=0;
    q= &num;

    cout <<"value of num is "<<*p<<endl;
    cout <<"value of num address is "<<p<<endl;

    int a= num;
    a++;
    cout <<a<<endl;
    cout<<num<<endl;

    int i=5;
    int *ptr = &num;
    cout<<ptr<<endl;
    (*ptr)++;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int *ptr2= ptr;
    cout<<*ptr<<endl;
    cout<<*ptr2<<endl;
    cout<<ptr2<<endl;

    int b = 10;
    int c = 5;
    int *btr= &c;
    cout<<btr<<endl;
    *btr = b;
    cout<<*btr<<endl;
    cout<<btr<<endl;

    int arr[]= {1,2,3,4};
    int *a2 = arr++;
    cout <<*a2<<endl;
    return 0;
}