#include<iostream>
using namespace std;
void reachHome(int src, int dest){
    cout<<"source "<<src<<" destination "<<dest<<endl;
    if(src==dest){
        cout<<"reached"<<endl;
        return;
    }
    src++;
    reachHome(src,dest);
}
int main(){
    int dest=10;
    int src=0;
    reachHome(src, dest);
    return 0;
}