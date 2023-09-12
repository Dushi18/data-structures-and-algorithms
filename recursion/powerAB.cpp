#include <iostream>
using namespace std;
int power(int a, int b){
    // int ans =1;
    if (b==0)
    {
        return 1;
    }
    if (b==1)
    {
        return a;
    }
    if (b&1)
    {
        // ans = a*(power(a,b/2)*power(a,b/2));
        return a*(power(a,b/2)*power(a,b/2));
    }
    else
    {
        // ans = power(a,b/2)*power(a,b/2);
        return power(a,b/2)*power(a,b/2);
    }
    
    
    
}
int main(){
    int i,j;
    cin>>i>>j;
    cout<<power(i,j)<<endl;
    return 0;
}