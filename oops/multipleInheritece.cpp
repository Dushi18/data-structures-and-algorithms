#include<iostream>
using namespace std;

class A{
    public:
        void fun1(){
            cout<<"class a"<<endl;
        }
};

class B{
    public:
        void fun2(){
            cout<<"class b"<<endl;
        }
};
//multiple inheritence
class C: public A, public B{
    public:
    void func3(){
        cout<<"class c"<<endl;
    }
};

int main(){
    C obj;
    obj.fun1();
    obj.fun2();
    obj.func3();

    return 0;
}