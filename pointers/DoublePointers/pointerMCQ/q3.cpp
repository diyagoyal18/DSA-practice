#include<iostream>
using namespace std;

int main(){
    int f=9;
    int *p=&f;
    cout<<(*p)++<<" "; //post increment 
    cout<<f<<endl;
    return 0;
}


// 9 10