// Kth largest element in an array
//leetcode 215
// https://leetcode.com/problems/kth-largest-element-in-an-array/
// first approach is to sort the array and return the kth element from the end
#include <bits/stdc++.h>
using namespace std ;

// class Solution {

// public:

// void kth_Largest_And_Smallest_By_AscendingOrder(vector<int>&arr, int k) {

//         sort(arr.begin(), arr.end())  ;
//         int n = arr.size()  ;

//         cout << "kth Largest element " << arr[n - k] << ", " << 
//         "kth Smallest element " << arr[k - 1];
//     }
// } ;
// int main() {

//     vector<int>arr = {1, 2, 6, 4, 5, 3}  ;

//     Solution obj ;
    
//     obj.kth_Largest_And_Smallest_By_AscendingOrder(arr, 3) ;

//     return 0 ;
// }
//time complexity of this approach is O(nlogn)
//space complexity of this approach is O(1)

// second approach is to use max heap

class Solution {
    public:
       
         int findKthLargest(vector<int>& nums, int k) {
            int n= nums.size();
            priority_queue<int>pq;
            for(int i=0;i<n;i++){
                pq.push(nums[i]);
            }
            int f=k-1;
            while(f>0){
                pq.pop();
                f--;
            }
            return pq.top();
         }
    };

    //Time complexity: O(k+(n-k)*log(k))
    //Space complexity: O(k)