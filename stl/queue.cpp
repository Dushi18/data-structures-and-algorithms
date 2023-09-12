#include <iostream>
using namespace std;
#include <queue>

int main(){
    queue<string> q;
    q.push("no");
    q.push("this");
    q.push("is");
    q.push("not");
    q.push("mandatory");

    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    return 0;
}