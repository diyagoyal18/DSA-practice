//count ways to reach nth stairs

#include<iostream>
using namespace std;
int count(long long nstairs){
    //base case
    if(nstairs<0){
        return 0;
    }
    if(nstairs==0){
        return 1;
    }
    int ans = count(nstairs-1) + count(nstairs-2);
    return ans;
}
int main(){
    
    int n;
    cin>>n;
    cout<<count(n)<<endl;
    return 0;
}