#include <iostream>
using namespace std;

class Car{
    string name;
    int power;
    int cylinders;
    public:
        void increasePower(){
            cout<<"increasing power"<<endl;
        }
};

class Mercedes: protected Car{
    int year;
    public:
        void getPower(){
            return this->increasePower();
        }

};

int main(){
    Mercedes B1;
    B1.getPower();
    return 0;
}