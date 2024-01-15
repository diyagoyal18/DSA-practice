#include<iostream>
using namespace std;

int main(){
    char arr[]="abcde";
    char *p= &arr[0];
    cout<<p<<endl; //poora array print hota h in case of character array
    return 0;
}

//abcde