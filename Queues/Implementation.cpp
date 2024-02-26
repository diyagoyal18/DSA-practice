#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int qfront;
    int rear;
    int size;

    public:
    Queue(){
        size=100001;
        arr= new int[size];
        qfront= 0;
        rear=0;
    }

        bool isempty(){
            if(qfront==rear){
                return true;
            }
            else{
                return false;
            }
        }

        int enqueue(int data){
            if(rear== size){
                cout<<"queue is full"<<endl;
            }
            else{
                arr[rear]= data;
                rear++;
            }
        }
        int dequeue(){
            if(qfront==rear){
                cout<<"queue is empty"<<endl;
            }
            else{
                int ans= arr[qfront];
                arr[qfront]= -1;
                qfront++;
                if(qfront==rear){
                    qfront=0;
                    rear=0;
                }
                return qfront;
            }
        }
        int front(){
            if(qfront==rear){
                cout<<"queue is empty"<<endl;
            }
            else{
                return arr[qfront];
            }
        }
};

int main(){
    
    return 0;
}