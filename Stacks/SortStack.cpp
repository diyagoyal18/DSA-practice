#include <bits/stdc++.h> 
#include<iostream>
using namespace std;


void Insert(stack<int> &stack, int x){
	if(stack.empty() || (!stack.empty() && stack.top()<x)){
		stack.push(x);
		return;
	}
	int num=stack.top();
	stack.pop();
	Insert(stack,x);
	stack.push(num);
}

void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}
	int num= stack.top();
	stack.pop();
	sortStack(stack);

	Insert(stack,num);
}