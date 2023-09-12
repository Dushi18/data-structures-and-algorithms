#include <iostream>
using namespace std;

void printCount(int n){
    if (n==0)
    {
        return ;
    }
    cout<<n<<endl;
    printCount(n-1);
    
}

int main(){
    int n;
    cin >> n;
    printCount(n);
    return 0;
}