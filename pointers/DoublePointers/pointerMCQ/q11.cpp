#include<iostream>
using namespace std;

int main(){
    char ch='a';
    char *p=&ch;
    ch++;
    cout<<*p<<endl;
    return 0;
}