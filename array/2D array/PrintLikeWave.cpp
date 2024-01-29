#include<iostream>
using namespace std;



    int wave(int arr[][4], int nrows, int mcols){
        for(int col=0;col<mcols;col++){
            if(col&1){
            //odd index-> bottom to top
            for(int row=nrows-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }

            }
            else{
            //even index-> top to bottom
            for(int row=0;row<nrows;row++){
                cout<<arr[row][col]<<" ";
            }
            }
            cout<<endl;
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

    wave(arr,3,4);
    return 0;
}