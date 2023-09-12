#include <iostream>
using namespace std;

class ParentChild{
    public:
    int weight;
    string name;

    private:
    int age;

    public:
    void setWeight(int weight){
        this->weight = weight;
    }
    void setAge(int age){
        this->age = age;
        cout<<"hi"<<endl;
    }
    int getAge(){
        cout<<"hii"<<endl;
        return this->age;
    }
};

class ChildClass1:public ParentChild{
    public:
    string color;
    void sleep(){
        cout<<"sleeping in childClass1"<<endl;;
    }
};
class ChildClass2:protected ParentChild{
    public:
    string color;
    void sleep(){
        cout<<"sleeping in childClass2"<<endl;;
    }
    int getWeight(){
       return this->weight; 
    }
};


int main(){
    ChildClass1 O1;
    O1.sleep();
    O1.name = "firstChild";
    cout<<O1.getAge()<<endl;
    cout<<O1.name<<endl;
    cout<<O1.weight<<endl;

    ChildClass2 O2;
    // cout<<O2.getAge()<<endl;
    cout<<O2.getWeight()<<endl;

    ParentChild p1;
    p1.setAge(44);
    p1.getAge();
    return 0;
}