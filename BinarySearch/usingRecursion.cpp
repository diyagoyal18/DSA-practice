 #include<iostream>
 using namespace std;
 bool binarySearch(int *arr, int s, int e, int k){
    //base case
    //element not found
    if(s>e){
        return false;
    }
    int mid=s+ (s-e)/2;
    //element found
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binarySearch(arr, mid+1, e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    } 
 }
 int main(){
    int arr[5]={2,3,4,5,6};
    int size=5;
    int key=4;
    cout<<"present or not "<<binarySearch(arr,0,5,key);
    return 0;
 }