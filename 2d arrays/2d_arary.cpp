#include <iostream>
using namespace std;
bool isValid(int arr[][4], int target, int row, int col){
    for(int i = 0; i <row; i++){
        for(int j = 0; j <col; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int rowSum(int arr[][4], int row, int col){
    for(int i = 0; i <row; i++){
        int sum = 0;
        for(int j = 0; j <col; j++){
            sum = sum +arr[i][j];
        }
        cout<<"sum of "<<i<<" row is "<<sum <<endl;
    }
};
int colSum(int arr[][4], int row, int col){
    for(int i = 0; i <col; i++){
        int sum = 0;
        for(int j = 0; j <row; j++){
            sum = sum +arr[j][i];
        }
        cout<<"sum of "<<i<<" column is "<<sum <<endl;
    }
}
int maxRowSum(int arr[][4], int row, int col){
    int maxi = INT_MIN;
    int rowIndex;
    for(int i = 0; i <row; i++){
        int sum = 0;
        for(int j = 0; j <col; j++){
            sum = sum +arr[i][j];
        }
        if (sum>maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"max sum is at row "<<rowIndex<<endl;
    cout<<"max sum is "<<maxi<<endl;

};


int main(){
    int arr[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"enter the element to search for :"<<endl;
    cin>>target;
    if(isValid(arr, target, 3, 4)){
        cout<<"found "<<target<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    rowSum(arr, 3, 4);
    colSum(arr, 3, 4);
    maxRowSum(arr, 3, 4);
    return 0;
}