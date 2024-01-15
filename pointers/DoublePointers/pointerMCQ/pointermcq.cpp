#include<iostream>
using namespace std;

int main(){
     int first= 10;
     int second=13;
     int *ptr=&second;
     *ptr=6;
     cout<<first<<" "<<second<<endl;
    return 0;
}