#include <bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerElement(vector<int>& A) {
    vector<int> G(A.size(), -1);
    stack<int> st;  
    
    for (int i = 0; i < (int)A.size(); i++) {
        while (!st.empty() && st.top() >= A[i]) {
            st.pop();
        }
        G[i] = st.empty() ? -1 : st.top();
        st.push(A[i]);
    }
    return G;
}

// Example usage
int main() {
    vector<int> A = {4, 5, 2, 10, 8};
    vector<int> res = nearestSmallerElement(A);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}