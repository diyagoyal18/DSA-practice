// space optimization of the code of nth fibonacci number done by bottom up approach

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
     int n;
     cin>>n;
         int prev1=1;
         int prev2=0;

if(n==0){
        return prev2;
}

        for(int i =2;i<=n;i++){
              int curr= prev1 + prev2;
               prev2=prev1;
               prev1=curr;
        }
        cout<< prev1<<endl;
     return 0;
}