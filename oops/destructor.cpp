#include <iostream>
#include <cstring>
using namespace std;

class destructor
{
public:
    char* name;
    int age;
    int birthYear;
    destructor(){
        cout<<"constructor called"<<endl;
        name = new char[100];
    }
    void print(){
        cout<<this->name<<" "<<this->age<<" "<<this->birthYear<<endl;
    }
    void setName(char name[]){
        strcpy(this->name, name);
    }
    ~destructor(){
        cout<<"destructor called"<<endl;
    }
};



int main(){
    destructor A;
    char name[]= "dushyant";
    A.setName(name);
    A.age = 20;
    A.birthYear=2002;
    A.print();

    destructor* B = new destructor;
    delete B;
    return 0;
}