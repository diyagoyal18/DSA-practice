#include <bits/stdc++.h> 
#include<iostream>
using namespace std;


void solve(stack<int> &s, int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    else{
        int top= s.top();
        s.pop();
        solve(s, x);
        s.push(top);
    }
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}
int main(){
    
    return 0;
} 