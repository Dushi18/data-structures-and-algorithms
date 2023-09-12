#include <iostream>
using namespace std;

bool isPalindrome(string str, int s, int e){
    if(s>e){
        return 1;
    }
    else{
        if (str[s]==str[e])
        {
            s++;
            e--;
            return isPalindrome(str, s, e);
        }
        else{
            return 0;
        }
        
    }
}

int main(){
    string str= "helleh";
    int s=0;
    int e=str.length()-1;
    if(isPalindrome(str, s, e)){
        cout<<"this is a palindrome"<<endl;
    }
    else{
        cout<<"this is not a palindrome"<<endl;
    }
    return 0;
}