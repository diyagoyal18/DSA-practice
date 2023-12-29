//time complexity: O(n^2)
// best case time complexity: O(n)
#include<iostream>
using namespace std;

    void printArray(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    void BUbbleSort(int arr[],int n){
        for (int i = 0; i < n-1; i++)
        {
            bool swapped = false;
            for (int j = 0; j < n-i; j++)
            {
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped= true;
                }
            }
            if(swapped== false){
                //already sorted
                break;
            }
        }
        
    }
int main(){
    int arr[5]={13, 2, 67,43,32};

    BUbbleSort(arr,5);
    printArray(arr,5);
    return 0;
}