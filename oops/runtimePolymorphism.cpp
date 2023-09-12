#include <iostream>
using namespace std;


class A{
    public:
        void hello(){
            cout<<"hi there, i am class A"<<endl;
        }
};
class B:public A{
    public:
        void hello(){
            cout<<"hi there, i am class B"<<endl;
        }
};
class C: public A{
    public:
};
int main(){

    B obj1;
    C obj2;
    obj1.hello();
    obj2.hello();
    return 0;
}