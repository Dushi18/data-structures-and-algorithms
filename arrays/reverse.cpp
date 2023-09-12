#include <iostream>
using namespace std;
#include <vector>
vector<int> reverse(vector<int> v){
    int start=0;
    int end = v.size()-1;
    while (start<=end){
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
    
}

int main(){
    vector <int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    vector <int> ans = reverse(v);
    for (auto i:ans)
    {
        cout << i <<" ";
    }
    
    return 0;
}