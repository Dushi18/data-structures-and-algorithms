#include <iostream>
using namespace std;

#include <stack>
int main(){
    stack <string> s;
    s.push("is");
    s.push("this");
    s.push("mandatory");
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    return 0;
}