#include <iostream>
using namespace std;

class covidResults{
    public:
        int result;
        string name;

        covidResults(){
            cout<<"constructor 1 is called"<<endl;
        }
        covidResults(int result, string name){
            cout<<"constructor 2 is called"<<endl;
            this->result = result;
            this->name = name;
        }
        covidResults(covidResults& C){
            cout<<"constructor 3 is called"<<endl;
            this->result = C.result;
            this->name = C.name;
        }
        void printObj(){
            cout<<"name is "<<this->name<<endl;
            cout<<"result is "<<this->result<<endl;
        }
        void setYear(int year){
            this->birthYear = year;
        }
        int getYear(){
            return this->birthYear;
        }
    private:
        int birthYear;
};

int main(){
    covidResults A;
    A.name="siksha";
    A.result = 0;
    covidResults* B = new covidResults(1, "Anveshika");
    
    covidResults C(*B);
    C.setYear(1998);
    C.printObj();
    cout<<C.getYear()<<endl;
    A.printObj();
    B->printObj();
    
    return 0;
}