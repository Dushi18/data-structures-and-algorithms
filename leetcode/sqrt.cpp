#include <iostream>
using namespace std;

int mySqrt(int x) {
        int start=0;
        int end = x;
        int long long mid;
        int ans=-1;
        while(start<=end){
            mid = start-(start-end)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                ans = mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    return ans;
    };
double morePrecision(int x, int sqrt, int precision) {
    double factor=1;
    double ans = sqrt;
    for (int i = 0; i < precision; i++)
    {
        factor=factor/10;
        for (double j = ans; j*j<x; j=j+factor)
        {
            ans = j;
        }
        
    }
    return ans;
   
    
}
int main(){
    int i;
    cin>>i;
    int sqrt = mySqrt(i);
    cout<<sqrt<<endl;
    cout<<morePrecision(i, sqrt , 3)<<endl;
}