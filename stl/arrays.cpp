#include <iostream>
using namespace std;
#include <array>

int main(){
    array <int, 5> arr = {1,2,3,4,5};
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout<<arr.at(i)<<endl;
    };
    cout<<arr.empty()<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    return 0;
}