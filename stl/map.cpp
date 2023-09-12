#include <iostream>
using namespace std;
#include <map>

int main(){
    map<int, string> m;
    m[1]="classes";
    m[2]="are";
    m[23]="today";
    m[10]="off";
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }
    m.insert({12, "for"});
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }
    m.erase(12);
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}