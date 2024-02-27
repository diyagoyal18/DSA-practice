#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0)
    {return 1;}
     
    return n*factorial(n-1);
}


int main(){
    int n;
    cin>>n;
    int answer= factorial(n);
    cout<<answer<<endl;
        return 0;
}

//why base case is mandatory for recursion
// agr hum base case ni lgayenge to function ko pta ni lgega ke rukna kb h isliye vo aage badta jayega aur ek time pr stack overflow aajayega jisse end mei segmentation fault aajayegaa