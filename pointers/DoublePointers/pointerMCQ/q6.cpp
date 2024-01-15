#include<iostream>
using namespace std;

int main(){
    float f=12.5;
    float x=21.5;
    float *p=&f;
    (*p)++;
    *p=x;
    cout<<*p<<" "<<f<<" "<<x<<endl;
        return 0;
}