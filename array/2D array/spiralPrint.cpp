#include<iostream>
using namespace std;



int SpiralPrint(int arr[][4], int row, int col){
    int total = row*col;

    int startingRow=0;
    int endingRow= row-1;
    int startingCol=0;
    int endingCol=col-1;
    int count=0;

    while(count<total){
        //starting row
        for(int i= startingCol;count<total && i<endingCol;i++){
            cout<<arr[i]<<" ";
            count++;
        }
        startingRow++;

        //ending col
        for(int i=startingRow;count<total && i<endingRow;i++){
            cout<<arr[i]<<" ";
                   count++;

        }
        endingCol--;

    //ending row
    for(int i= endingCol;count<total && i>=endingCol;i--){
        cout<<arr[i]<<" ";
                    count++;

    }
    endingRow--;

    //starting col
    for(int i=endingRow;count<total && i>=startingRow;i--){
        cout<<arr[i]<<" ";
                    count++;

    }
    startingCol++;
    }
}

int main(){
        int arr[3][4];
    // rowwise input
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

    SpiralPrint(arr,3,4);

    return 0;
}