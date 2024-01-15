#include<iostream>
using namespace std;

int main(){
    int f=7;
    int s=5;
    int *t=&s;
    *t=*t+2;
    cout<<f<<" "<<s<<endl;
    return 0;
}