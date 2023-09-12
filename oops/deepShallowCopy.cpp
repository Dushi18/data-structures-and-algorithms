#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
    int salary;
    
public:
    char* name;
    int rank;
    Employee(){
        name = new char[100];
    }

    Employee(Employee& temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->rank = temp.rank;
        this->salary = temp.salary;
    } 
    void setSalary(int salary){
        this->salary = salary;
    }
    int getSalary(){
        return this->salary;
    }
    void print(){
        cout<<"[name : "<<this->name<<" , ";
        cout<<"rank : "<<this->rank<<" , ";
        cout<<"salary in CTC: "<<this->salary<<" ]"<<endl;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
};


int main(){
    Employee A;
    char name[]="dushyant";
    A.setName(name);
    A.setSalary(10);
    A.rank=9;
    A.print();
    //BY DEFAULT SHALLOW COPY
    Employee B(A);
    B.print();

    A.name[0]='n';
    A.print();
    //changes in A's name will also be changed in B becuase of shallow copy
    B.print();

    Employee C(A);
    A.name[1]='i';
    A.print();
    C.print();
 
}