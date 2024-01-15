#include<iostream>
using namespace std;

int main(){
    int i=5;

    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<j<<endl; //j is a reference variable
    j++;
        cout<<i<<endl;

    return 0;
}