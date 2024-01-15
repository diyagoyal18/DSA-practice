#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3};
    int *p=arr;
    cout<<p[2]<<endl; //*(p+2)
    return 0;
}