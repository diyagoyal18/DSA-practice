#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
    void swapAlternate(int arr[],int n){
        for(int i=0;i<n;i=i+2){
            if(i+1<n){
                swap(arr[i],arr[i+1]);
            }
            
           
        }
    }
int main(){
    int arr[5]={1,2,3,4,5};
       swapAlternate(arr, 5);
       printArray(arr,5);
    return 0;
}