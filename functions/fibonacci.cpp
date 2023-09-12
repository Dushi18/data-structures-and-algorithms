#include <iostream>
using namespace std;

int fibonacci(int num){
    int term;
    if (num==0)
    {
        term =0;
    }
    else if (num==1)
    {
        term=1;
    }
    else{
        term = fibonacci(num-1)+fibonacci(num-2);
    }
    

    return term;
};

int main(){
    int n;
    cout<<"enter the position for fibonacci"<<endl;
    cin>>n;
    int term = fibonacci(n);
    cout<<term;
    return 0;
}