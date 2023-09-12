#include <iostream>
using namespace std;

#include <deque>
int main(){
    deque <int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    d.pop_front();
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    cout<<d.empty();
    cout<<endl;
    d.push_back(10);
    d.push_front(20);
    d.push_back(30);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}