#include<iostream>
using namespace std;

void printSum(int arr[][4], int row, int col){
    cout<<"printing row wise sum"<<endl;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++){
            sum= sum + arr[row][col];
            }
            cout<<sum<<" ";
        }
    }


int main(){
       int arr[3][4];
    // rowwise input
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printSum(arr,3,4);
    return 0;
}