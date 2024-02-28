#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size, int k){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remaining= linearSearch(arr+1, size-1, k);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=6;
    bool ans= linearSearch(arr,size,key); 
    if(ans){
        cout<<"element found"<<endl;

    }
    else{
        cout<<"element not found"<<endl;
    }
       return 0;

}