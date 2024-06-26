// bottom up approach with recursion and memoization/tabulation

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int fib(int n, vector<int> &dp){
        //base case
        if(n<=1)
        return n;

        if(dp[n]!=-1)
        return dp[n];

        dp[n]= fib(n-1,dp) + fib(n-2,dp);
}
int main()
{
     int n;
     cin>>n;
        vector<int> dp(n+1);
        for(int i=0;i<=n;i++){
                dp[i]=-1;
        }
        cout<<fib(n,dp)<<endl;
        return 0;
}