#include <iostream>
using namespace std;

class Cricketers{
    public:
        string nationality;
        void setAge(int a){
            this->age = a;
            cout<<"age setted"<<endl;
            cout<<this->age<<endl;
        }
        int getAge(){
            return age;
        }
    protected:
        int age;
        void privateData(){
            cout<<"privateData"<<endl;
        }
};

class Indian: protected Cricketers{
    public:
        int year;
        void members(){
            cout<<"child class methods"<<endl;
        }

};

class UPCA : protected Indian{
    public:
        void final(){
            cout<<"Im a upca cricketr"<<endl;
        }
        void printAge(){
            cout<<"age is "<<this->age<<endl;
        }
        void setAgeUPCA(int age){
            this->age=age;
        }
    
};
int main(){
    Cricketers C;
    C.nationality="indian";
    C.setAge(21);
    cout<<C.getAge()<<endl;;
    UPCA c1;
    c1.setAgeUPCA(20);
    c1.final();
    c1.printAge();
    return 0;
}