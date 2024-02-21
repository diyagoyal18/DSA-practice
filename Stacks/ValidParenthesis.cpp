#include<iostream>
#include<stack>
using namespace std;


bool isValidParenthesis(string s)
{
    stack<char>hlo;
    for(int i=0; i<s.length();i++){
        char ch= s[i];
    //opening bracket, stack push
    //closing bracket, stack top and then pop

    if(ch=='(' || ch=='[' || ch=='{'){
        hlo.push(ch);
    }
    else{
        if (!hlo.empty()) {
          char top = hlo.top();
          if (ch == ')' && top == '(' || ch == '}' && top == '{' ||
              ch == ']' && top == '[') {
            hlo.pop();
          } else {
            return false;
          }
        } else {
          return false;
        }
    }

    }

    if(hlo.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    return 0;
}