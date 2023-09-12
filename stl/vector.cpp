#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> a(5);
    cout<<"size of vector "<<a.size()<<endl;
    cout<<"capacity of vector "<<a.capacity()<<endl;
    a.push_back(10);
    for (int i:a)
    {
        cout<<i<<" "<<endl;
    }
    cout<<"size of vector "<<a.size()<<endl;
    cout<<"capacity of vector "<<a.capacity()<<endl;
    cout <<a.front()<<endl;
    cout <<a.back()<<endl;
    
    return 0;
}