//both sides se push pop operations are allowed

 #include<iostream>
 #include<queue>
 using namespace std;
 
 int main(){
    deque<int>d;
    d.push_back(12);
    d.push_front(13);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_back();

      cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();
     if(d.empty()){
        cout<<"queue is empty"<<endl;     }
        else{
            cout<<"queue is not empty"<<endl;
        }
    return 0;
 }