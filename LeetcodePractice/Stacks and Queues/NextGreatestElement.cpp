//next greatest element
// leetcode problem no 496
// Given an array, find the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1.

#include<bits/stdc++.h>
using namespace std;    
class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
           unordered_map<int,int> mp; 
            stack<int> st; 
            for(int n : nums2){
                while(!st.empty() && n > st.top()){
                    mp[st.top()] = n; 
                    st.pop(); 
                }
                st.push(n);
            }
            vector<int> ans;
            for(int n : nums1){
                if(mp.count(n) > 0) ans.push_back(mp[n]);
                else ans.push_back(-1); 
            }
            return ans;
        }
    };