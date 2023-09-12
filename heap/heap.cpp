#include<iostream>
using namespace std;
class heap{
    public:
        int size;
        int arr[100];
    heap(){
        arr[0]=-1;
        size = 0;
    }    
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;
        while (index>1)
        {
            int parent = index/2;
            if(arr[parent] <arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return ;
            }
        }
        
    }
    void printHeap(){
        for (int i = 1; i <=size; i++)
        {
                cout<<arr[i]<<" ";
        }cout<<endl;
        
    }
    void deleteFromHeap(){
        arr[1] = arr[size];
        size--;

        int index =1;
        while(index<size){
            int leftIndex = 2*index;
            int rightIndex = 2*index+1;
            if(leftIndex<=size &&arr[leftIndex]>arr[index]&&arr[leftIndex]>arr[rightIndex]){
                swap(arr[index], arr[leftIndex]);
                index = leftIndex;
            }
            else if(rightIndex<=size &&arr[rightIndex]>arr[index]&&arr[leftIndex]<arr[rightIndex]){
                swap(arr[index], arr[rightIndex]);
                index = rightIndex;
            }
            else{
                return ;
            }
        }
    }
    
};
void heapify(int arr[], int size, int i){
        int largest = i;
        int left = i*2;
        int right = 2*i+1;
        if(left<=size && arr[left]>arr[largest]){
            largest = left;
        }
        if(right<=size && arr[right]>arr[largest]){
            largest = right;
        }
        if (largest!=i){
            swap(arr[i], arr[largest]);
            heapify(arr, size, largest);
        }
};
void heapSort(int arr[], int n){
    int size = n;
    while (size>1){
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
    
};

int main(){
    heap h1;
    h1.insert(50);
    h1.printHeap();
    h1.insert(51);
    h1.insert(52);
    h1.insert(53);
    h1.insert(54);
    h1.printHeap();
    h1.deleteFromHeap();
    h1.printHeap();
    h1.insert(54);
    h1.printHeap();

    int arr[6] =  {-1, 51, 52, 53, 54, 55};
    for (int i = 5/2; i >0; i--)
    {
        heapify(arr, 5, i);
    }
    for (int i = 1; i <=5; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    int arr1[6] = {-1, 100, 101, 98, 103, 96};
    for (int i = 5/2; i >0; i--)
    {
        heapify(arr1, 5, i);
    }
    for (int i = 1; i <=5; i++)
    {
        cout<<arr1[i]<<" ";
    }cout<<endl;
    cout<<"heap sort"<<endl;
    heapSort(arr1, 5);
    for (int  i = 1; i <= 5; i++)
    {
        cout<<arr1[i]<<" ";
    }cout<<endl;
    
    
    
    return 0;
}