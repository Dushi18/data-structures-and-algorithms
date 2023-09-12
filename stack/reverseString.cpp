#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    stack<char> s;
    string name ="nitika";
    for(int i=0; i<name.length(); i++){
        s.push(name[i]);
    }
    string ans ="";
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    cout<<ans<<endl;
    return 0;
}