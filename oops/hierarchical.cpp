#include<iostream>
using namespace std;

class A{
    public:
        void fun1(){
            cout<<"class a"<<endl;
        }
};

class B: public A{
    public:
        void fun2(){
            cout<<"class b"<<endl;
        }
};
//HIERARCHICAL inheritence
class C: public A{
    public:
    void func3(){
        cout<<"class c"<<endl;
    }
};

int main(){
    C obj;
    obj.fun1();
    obj.func3();

    B obj1;
    obj1.fun1();
    obj1.fun2();
    return 0;
}