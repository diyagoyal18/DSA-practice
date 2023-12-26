#include<iostream>
using namespace std;

    int firstOccurance(int arr[], int n, int key){
        int s=0;
        int e=n-1;
        int mid = s+(e-s)/2;
        int ans = -1;
       while (s<=e)
       {
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
       }
       return ans;
    }
    int lastOccurance(int arr[], int n, int key){
        int s=0;
        int e=n-1;
        int mid = s+(e-s)/2;
        int endpt = -1;
       while (s<=e)
       {
        if(arr[mid]==key){
            endpt=mid;
            s=mid+1;
        }
       else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
       }
       return endpt;
    }
int main(){
    int arr[10]={1,2,3,3,3,3,3,3,3,5};
    int first = firstOccurance(arr,10,3);
    int last = lastOccurance(arr,10,3);
    cout<<"first occurance of 3 is:"<<first<<endl;

     cout<<"last occurance of 3 is:"<<last<<endl;

    return 0;
}