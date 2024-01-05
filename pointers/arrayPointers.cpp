#include<iostream>
using namespace std;

int main(){
    int arr[10]={2,5,6};
    cout<<"address of 1st block: "<<arr<<endl;
        cout<<"address of 1st block: "<<&arr[0]<<endl;

        cout<<*arr<<endl;
        cout<<*arr +1<<endl;
        cout<<*(arr+1)<<endl;
        

    return 0;
}

//arr[i] = *(arr+i)
//i[arr]=*(i+arr)  