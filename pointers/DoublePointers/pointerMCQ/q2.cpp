#include<iostream>
using namespace std;

int main(){
    int f=9;
    int *p=&f;
    int *q=p;
    (*q)++;
    cout<<f<<endl;
    return 0;
}