//Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.


#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
       for(long a=0;a*a<=c;a++){
        double b= sqrt(c-a*a);
        if(b==(int)b){
            return true;
        }
       }
       return false;
    }
};
int main(){
    
    return 0;
}