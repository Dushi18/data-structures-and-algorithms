#include <iostream>
using namespace std;


class Overloading{
    public:
        int a;
        int b;
        int operator+ (Overloading &B){
        cout<<"Overloading"<<endl;
        int value1 = this->a;
        int value2 = B.a;
        // cout<<value2<<" "<<value1<<endl;
        return value2-value1;
        }

        void operator() (){
        cout<<"Overloading "<<endl<<this->a<<endl;;
        }
};

int main(){
    Overloading A, B;
    A.a = 1;
    B.a = 5;
    // cout<<A + B<<endl;
    cout<<A + B<<endl;
    A();
    return 0;
}