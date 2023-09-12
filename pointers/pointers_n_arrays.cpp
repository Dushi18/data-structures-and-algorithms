#include <iostream> 
using namespace std;

int main(){
    int arr[10]={0};
    cout <<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;

    int *ptr = &arr[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;

    int arr2[5]={1,2,3,4,5};
    cout<<arr2<<endl;
    cout<<arr2+2<<endl;
    cout<<arr2[2]<<endl;
    cout<<*(arr2+2)<<endl;
    cout<<*arr2+20<<endl;

    int temp[]= {11,22};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;

    int *p2 = &arr2[0];
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(&p2)<<endl;
    cout<<sizeof(*p2)<<endl;
    return 0;

    int i = 8;
    int *abc = &i;
    cout <<sizeof(abc)<<endl;
}