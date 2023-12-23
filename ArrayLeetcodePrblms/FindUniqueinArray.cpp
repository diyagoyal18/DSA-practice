#include<iostream>
using namespace std;
    // void printArray(int arr[],int n){
    //     for(int i=0;i<n;i++){
    //         cout<<arr[i]<<endl;
    //     }
    // }
    int unique(int arr[],int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum^arr[i];
        }
        cout<<sum;
    }
int main(){
    int arr[5]={1,2,3,2,3};
    
    unique(arr,5);
    
    return 0;
}