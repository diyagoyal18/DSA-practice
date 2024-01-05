#include<iostream>
using namespace std;
 int print(int *p){
    cout<<*p<<endl;
 }

// void update(int *p){
//     p=p+1;
// }
int getSum(int arr[],int n){ //*arr
    cout<<"size: "<<sizeof(arr)<<endl; //show the size of pointer

    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}

int main(){
    // int value=5;
    // int *p=&value;

    // print(p);

    int arr[5]={1,2,3,4,5};
    cout<<"sum is: "<<getSum(arr,5)<<endl;

    return 0;
}