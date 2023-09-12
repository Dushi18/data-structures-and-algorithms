#include <iostream> 
using namespace std;

void update(int **p2){
    // cout<<"p2 = p2+1"<<endl;
    // p2=p2+1;
    //no change 


    // cout<<"*p2 = *p2+1"<<endl;
    // *p2=*p2+1;

    // cout<<"**p2 = **p2+1"<<endl;
    **p2=**p2+1;

}

int main(){
    int a=5;
    int* p1 = &a;
    int **p2 = &p1;

    cout<<"printing the value of a"<<endl;
    cout<<a<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;
    cout<<"printing the value of p1"<<endl;
    cout<<&a<<endl;
    cout<<p1<<endl;
    cout<<*p2<<endl;
    cout<<"printing the value of p2"<<endl;
    cout<<&p1<<endl;
    cout<<p2<<endl;


    cout<<"before values of a, p1 , p2"<<endl;
    cout<<a<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"after values of a, p1 , p2"<<endl;
    cout<<a<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    return 0;
}