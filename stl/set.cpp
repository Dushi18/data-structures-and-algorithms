#include <iostream>
using namespace std;
#include <set>

int main(){
    set <int> s;
    s.insert(5);
    s.insert(6);
    s.insert(5);
    s.insert(0);
    s.insert(0);
    s.insert(5);
    s.insert(2);
    s.insert(2);
    for (auto i:s)
    {
        cout<<i<<endl;
    }
    s.erase(s.begin());
    for (auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<s.count(5)<<endl;
    
    return 0;
}