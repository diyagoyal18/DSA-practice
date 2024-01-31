#include<iostream>
using namespace std;
class Hero{
    private:
    int health;

    public:
    char level;
    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char l){
        level=l;
    }
};

int main(){
    //creation of an object
    // Hero hi;            //static allocation
   
    Hero *b = new Hero;      //dynamic allocation in heap

    b->setLevel('A');
    cout<<"level: "<<(*b).level<<endl;  //printing the value using dym=namically allocated pointer
    //or
    cout<<"level: "<<b->level<<endl;

    // cout<<hi.getHealth()<<endl;

    // hi.setHealth(70);
    // hi.level= 'A';

    // cout<<"health: "<<hi.getHealth()<<endl;
    // cout<<"level: "<<hi.level<<endl;
    // cout<<"size of hero: "<<sizeof(hi)<<endl; //answer is 8 due to greedy allignment
    return 0;
}