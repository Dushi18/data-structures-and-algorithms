#include<iostream>
using namespace std;

int main(){
    int i=0, rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    while (i<rows)
    {
        int j=0;
        while (j<rows-i)
        {
            cout<<j+1<<" ";
            j++;
        }
        int star1=i;
        while (star1)
        {
            cout<<"* ";
            star1--;
        }
        int star2=i;
        while (star2)
        {
            cout<<"* ";
            star2--;
        }
        int k=0;
        int start=rows-i;
        while (k<rows-i)
        {
            cout<<start<<" ";
            start--;
            k++;
        }
        
        

        
        cout<<endl;
        i++;
    }
    
    return 0;
}