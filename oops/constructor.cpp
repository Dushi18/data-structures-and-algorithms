#include <iostream>
using namespace std;

class Database{
    public:
        int marks;
        int age;
        void set_roll(int value){
            roll = value;
        }
        int get_roll() {
             return roll; }
        Database(int age){
            cout<<"constructor 1 called"<<endl;
            this->age = age;
        };
        Database(int age, int marks){
            //overwrited the by default constructor
            cout<<"constrctor 2 called"<<endl;
            cout<<this<<endl;
            this->age = age;
            this->marks = marks;
        }
    private:
        int roll;
};
int main(){
    Database d1(12);
    d1.marks = 100;
    cout<<d1.marks<<endl;
    cout<<sizeof(d1)<<endl;

    //dynamically
    Database* d2 = new Database(10, 56);
    cout<<d2->age<<endl;
    // parameterised constructor
    Database d3(29, 99);
    // d3.age = 30;
    cout<<&d3<<endl;
    cout<<d3.age<<endl;
    return 0;
}