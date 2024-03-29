//First negative integer in every window of size k

//Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

 #include<iostream>
 #include<vector>
 #include<deque>
 #include<queue>
 using namespace std;
 vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
          deque<long long int> dq;
          vector<long long> ans;
          
          for(int i=0;i<K;i++){
              //store
              if(A[i]<0){
                  dq.push_back(i);
              }
          }
          if(dq.size()>0){
              ans.push_back(A[dq.front()]);
          }
          else{
              ans.push_back(0);
          }
          
          for(int i=K; i<N;i++){
              //removal
              if(!dq.empty() && i-dq.front()>=K){
                  dq.pop_front();
              }
              if(A[i]<0){
                  dq.push_back(i);
              }
              
              //ans store
              if(dq.size()>0){
                  ans.push_back(A[dq.front()]);
              }
              else{
                  ans.push_back(0);
              }
          }
          return ans;
 }
 int main(){
    
    return 0;
 }