#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(2);
    s.push(4);

    s.pop();
    cout<<"printing top element: "<<s.top();
    return 0;
}

// s.empty()
//s.siz()