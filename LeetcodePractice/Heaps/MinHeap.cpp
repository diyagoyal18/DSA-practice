 #include <bits/stdc++.h>
 using namespace std;
   // Includes standard libraries
vector<int> minHeap(int n, vector<vector<int>>& q) {
    // This function processes 'n' queries stored in 'q' and returns a list of removed minimums

    vector<int> heap;     // A dynamic array to serve as the min-heap
    vector<int> result;   // Stores the values that are removed from the min-heap

    // A lambda function to sift an element upwards so the min-heap property is maintained
    auto siftUp = [&](int idx) {
        while (idx > 0) {
            int parent = (idx - 1) / 2;     // Calculate parent index
            if (heap[idx] >= heap[parent])  // If current element is not smaller, no swap needed
                break;
            swap(heap[idx], heap[parent]);  // Swap current element with parent
            idx = parent;                   // Update index to continue checking upwards
        }
    };

    // A lambda function to sift an element downwards to maintain the min-heap property
    auto siftDown = [&](int idx) {
        int size = heap.size();
        while (true) {
            int left = 2 * idx + 1; 
            int right = 2 * idx + 2; 
            int smallest = idx;

            if (left < size && heap[left] < heap[smallest]) 
                smallest = left;            // Mark left as smallest if it's smaller

            if (right < size && heap[right] < heap[smallest]) 
                smallest = right;           // Mark right as smallest if it's smaller

            if (smallest == idx) 
                break;                      // No change needed if the current is already smallest

            swap(heap[idx], heap[smallest]); // Swap down
            idx = smallest;                  // Continue sifting down
        }
    };

    // Process each query
    for (int i = 0; i < n; i++) {
        // q[i][0] == 0 means "insert"
        if (q[i][0] == 0) {
            heap.push_back(q[i][1]);         // Add new element to the heap
            siftUp(heap.size() - 1);         // Restore min-heap order from the bottom up
        } 
        // q[i][0] != 0 means "remove and return minimumn  "
        else {
            if (heap.empty()) {
                result.push_back(-1);        // If no elements, push -1
                continue;
            }
            int minVal = heap[0];           // Minimum is at the root
            heap[0] = heap.back();          // Move the last element to the root
            heap.pop_back();                // Remove the last element
            if (!heap.empty()) 
                siftDown(0);                // Restore min-heap order from the top down
            result.push_back(minVal);       // Collect the removed minimum
        }
    }
    return result;                           // Return the list of removed elements
}