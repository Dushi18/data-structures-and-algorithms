#include <iostream>
using namespace std;

class Operation{
    public:
        int sum(int a, int b, int c=0, int d=0){
            return a+b+c+d;
        }
        int multiply(int a, int b, int c){
            return a*b*c;
        }
        int multiply(int a, int b){
            return a*b;
        }
};

int main(){
    Operation A;
    cout<<A.sum(5, 6, 7, 8)<<endl;;
    cout<<A.sum(1,2)<<endl;

    cout<<A.multiply(1,2,3)<<endl;
    cout<<A.multiply(12,12)<<endl;
    return 0;
}