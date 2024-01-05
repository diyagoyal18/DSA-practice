#include<iostream>
using namespace std;

int main(){
    int num= 5;

    cout<<num<<endl;
cout<<"address of num: "<<&num<<endl;
    int *p= &num;
    cout<<"value: "<<*p<<endl;
        cout<<"address: "<<p<<endl;



    int *q=p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;

    int i=4;
    int *t= &i;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"before t "<<t<<endl;
    t=t+1;
    cout<<"after t "<<t<<endl;
    return 0;
}
 

    // for all types of data the size of pointer is 8