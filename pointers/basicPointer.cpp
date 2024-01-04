#include<iostream>
using namespace std;

int main(){
    int num= 5;

    cout<<num<<endl;
cout<<"address of num: "<<&num<<endl;
    int *ptr= &num;
    cout<<"value: "<<*ptr<<endl;
        cout<<"address: "<<ptr<<endl;

    return 0;
}


    // for all types of data the size of pointer is 8