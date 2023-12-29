//time complexity: O(n^2)

#include<iostream>
using namespace std;
 

 void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
 }
void SelectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
        
    }
    
}
int main(){
    int arr[5]={22,34,54,65,12};
    
   
    SelectionSort(arr, 5);
    printArray(arr,5);
    return 0;
}