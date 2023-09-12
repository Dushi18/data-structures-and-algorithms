#include<iostream>
#include <cstring>
using namespace std;

class Static{
    public:
        int age;
        char* name;
        static int timeTotal;
        Static(){
            name = new char[100];
            cout<<"constructor called"<<endl;
        }
        void setName(char name[]){
            strcpy(this->name, name);
        }
        void print(){
            cout<<this->name<<" "<<this->age<<" "<<this->timeTotal<<endl;
        }
        static int random(){
            cout<<timeTotal<<" "<<endl;
            return timeTotal;
        }
};
int Static::timeTotal = 5;
int main(){
    Static A;
    char name[]="dushyant";
    A.setName(name);
    A.age = 20;
    A.print();
    cout<<Static::timeTotal<<endl;
    cout<<A.timeTotal<<endl;
    cout<<Static::random()<<endl;
    cout<<A.random()<<endl;
    return 0;
}