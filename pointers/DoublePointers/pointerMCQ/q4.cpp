#include<iostream>
using namespace std;

int main(){
    int *p=0; 
    int f=110;
    *p=f;
    cout<<*p<<endl;
    return 0;
}

 //it should be written as p=&f
 //segmentation fault