#include<iostream>
using namespace std;

class RecordFile
{
private:
    int age;
public:
    string name;
    int level;

    //GETTER
    int getAge(){
        return age;
    }
    //SETTER
    void setAge(int a){
        age = a;
    }
    void setLevel(int a){
        level = a;
    }
};



int main(){
    //STATIC ALLOCATION
    RecordFile dushyant;
    dushyant.setAge(20);
    dushyant.setLevel(10);
    dushyant.name = "dushi";
    cout << dushyant.name << endl;
    cout << dushyant.getAge() << endl;
    cout<<dushyant.level<<endl;

    //dynamic allocation 
    RecordFile* nitika = new RecordFile;
    nitika->name = "niti";
    nitika->setAge(19);
    nitika->setLevel(9);
    //by dereference operator
    cout<<(*nitika).name<<endl;
    cout<<(*nitika).getAge()<<endl;
    cout<<(*nitika).level<<endl;

    //by arrow operator
    cout<<nitika->name<<endl;
    cout<<nitika->getAge()<<endl;
    cout<<nitika->level<<endl;





}