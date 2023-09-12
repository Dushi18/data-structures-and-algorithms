#include <iostream>
using namespace std;

void reverseString(string& s, int start, int end){
    if (start>end)
    {
        return ;
    }
    swap(s[start], s[end]);
    start++;
    end--;
    reverseString(s, start, end);
    
}
int main(){
    string s= "nitika";
    int start=0;
    int end = s.length()-1;
    // cout<<s;.//
    reverseString(s, start, end);
    cout<<s<<endl;
    return 0;
}