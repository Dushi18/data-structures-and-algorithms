#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else if(ch>='A'&&ch<='Z'){
        return ch-'A'+'a';
    }
    else{
        return ch;
    }
}
bool checkPalindrome(string s)
{
    int start=0;
    int end = s.length()-1;
    while(start<=end){
        if(toLowerCase(s[start])!=toLowerCase(s[end])){
            return false;
        }
         else {
            start++;
            end--;

            if(toLowerCase(s[start])<'a'||toLowerCase(s[start])>'z'){
                start++;
            }
            if(toLowerCase(s[end])<'a'||toLowerCase(s[end])>'z'){
                end--;
            }
            
            }
            
        }
        return true;
    }
     char getMaxOccuringChar(string str)
    {
        int arr[26]={0};
        for(int i=0; i<str.length();i++){
            char ch = str[i];
            int number = 0;
            number = ch-'a';
            arr[number]++;
        }
        int max=-1, ans=0;
        for(int i=0;i<26;i++){
            if(arr[i]>max){
                max=arr[i];
                ans = i;
            }
        }
        char finalAns= 'a'+ans;
        return finalAns;
    }
int main(){
    string s="nitin";
    cout<<s.length()<<endl;
    // cout<<s[0]<<endl;
    // cout<<toLowerCase(s[0])<<endl;
    // cout<<checkPalindrome(s);
    if(checkPalindrome(s)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    cout<<getMaxOccuringChar(s);
    return 0;
}