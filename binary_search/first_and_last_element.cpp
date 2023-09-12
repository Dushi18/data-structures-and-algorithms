#include <iostream>
using namespace std;

int firstPos(int arr[], int size, int key){
	int start = 0;
	int ans, mid;
	int end = size-1;
	while(start<=end){
		mid = start+(end-start)/2;
		if(arr[mid]==key){
			ans = mid;
			end = mid-1;
            // cout<<"array mid is equal key"<<endl;
		}
		else if (arr[mid]>key){
			end = mid-1;
            // cout<<"arry mid is greater than key"<<endl;
		}
		else if (arr[mid]<key){
			start = mid+1;
            // cout<<"array mid is less than key"<<endl;
		}
        // cout<<mid<<endl;
	}
	return ans;

};
int lastPos(int arr[], int size, int key){
	int start = 0;
	int ans;
	int end = size-1;
	while(start<=end){
		int mid = start+(end-start)/2;
		if(arr[mid]==key){
			ans = mid;
			start = mid+1;
		}
		else if (arr[mid]>key){
			end = mid-1;
		}
		else if (arr[mid]<key){
			start = mid+1;
		}
	}
	return ans;

};


int main(){
    int arr[9]={0,1,2,2,2,3,4,5,6};
    int key = 2;
    int first = firstPos(arr, 9, key);
    int last = lastPos(arr, 9, key);
    cout<<"first and last occurence of 2 in arr is "<<first<<" "<<last<<endl;

    return 0;
}