#include<iostream>
using namespace std;
void print(int n){
    //base case
    if (n==0)
    {
        return;
    }
    cout<<n<<endl;// recursive call ke upar print krane se pehle cout hoga fir function call hoga.. is case mein the output is 54321
       print(n-1); //tail recursion
    //agr cout baad mei krei after recursive call then the output is 12345
}
int main(){
    int n;
    cin>>n;
    print(n);
    
    return 0;
}