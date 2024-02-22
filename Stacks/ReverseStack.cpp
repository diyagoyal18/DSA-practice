#include<iostream>
#include<stack>
using namespace std;



void InsertAtBottom(stack<int> &s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    InsertAtBottom(s, x);
    s.push(num);

}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return ;
    }
    int num=stack.top();
    stack.pop();
    reverseStack(stack);
    InsertAtBottom(stack, num);
}

int main(){
    
    return 0;
}