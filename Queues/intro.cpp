#include<iostream>
#include<queue>
using namespace std;

int main(){
    //create a queue

    queue<int> q;
    q.push(15);
    q.push(23);

    cout<<"size of queue: "<<q.size()<<endl;

    q.pop();
    cout<<"front of q is: "<<q.front()<<endl;
    q.pop();
    cout<<"size of queue: "<<q.size()<<endl;
    if(q.empty()){
        cout<<"q is empty";
    }
    else{
        cout<<" q is not empty";
    }

    return 0;
}