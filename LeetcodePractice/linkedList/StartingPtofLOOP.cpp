//leetcode problem: 142. Linked List Cycle II
// Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
                                
#include <iostream>
#include <unordered_map>

using namespace std;

// Node class represents a node
// in a linked list
class Node {
public:
    // Data stored in the node
    int data;      
    // Pointer to the next node in the list
    Node* next;

    // Constructor with both data
    // and next node as parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data as a
    // parameter, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to find the first node
// of the loop in a linked list
Node* firstNode(Node* head) {
    
    // Initialize a slow and fast 
    // pointers to the head of the list
    Node* slow = head;  
    Node* fast = head;  

    // Phase 1: Detect the loop
    while (fast != NULL && fast->next != NULL) {
        
        // Move slow one step
        slow = slow->next;        
        
        // Move fast two steps
        fast = fast->next->next;  

        // If slow and fast meet,
        // a loop is detected
        if (slow == fast) {
            
             // Reset the slow pointer
             // to the head of the list
            slow = head; 

            // Phase 2: Find the first node of the loop
            while (slow != fast) {
                
                // Move slow and fast one step
                // at a time
                slow = slow->next;  
                fast = fast->next;  

                // When slow and fast meet again,
                // it's the first node of the loop
            }
            
            // Return the first node of the loop
            return slow;  
        }
    }
    
     // If no loop is found, return NULL
    return NULL; 
}


int main() {
    // Create a sample linked list with a loop
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    node1-> next = node2;
    Node* node3 = new Node(3);
    node2-> next = node3;
    Node* node4 = new Node(4);
    node3->next = node4;
    Node* node5 = new Node(5);
    node4-> next = node5;

    // Make a loop from node5 to node2
    node5->next = node2;

    // Set the head of the linked list
    Node* head = node1;

    // Detect the loop in the linked list
    Node* loopStartNode = firstNode(head);

    if (loopStartNode) {
        cout << "Loop detected. Starting node of the loop is: "<< loopStartNode->data << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    return 0;
}
                                
// Time complexity: O(n)
// Space complexity: O(1)
// The code uses Floyd's Tortoise and Hare algorithm to detect the loop in the linked list. The algorithm consists of two phases:
// Phase 1: Detect the loop
// In this phase, two pointers, slow and fast, are initialized to the head of the linked list. The slow pointer moves one step at a time, while the fast pointer moves two steps at a time. If there is a loop in the linked list, the slow and fast pointers will eventually meet at some node within the loop.
// Phase 2: Find the first node of the loop
// Once the loop is detected, the slow pointer is reset to the head of the linked list, and both slow and fast pointers move one step at a time. When they meet again, it indicates the first node of the loop.
// The code returns the first node of the loop if a loop is detected, and NULL otherwise. The time complexity of the code is O(n), where n is the number of nodes in the linked list, and the space complexity is O(1).
// The code can be used to solve the LeetCode problem 142. Linked List Cycle II, where the task is to return the node where the cycle begins in a linked list.
// The code can be further optimized by using a hash table to store visited nodes and detect the loop in a single pass. However, the Floyd's Tortoise and Hare algorithm provides a more efficient solution with constant space complexity.
// The code can be extended to handle cases where there are multiple loops in the linked list by modifying the algorithm to detect and find the first node of the loop with multiple pointers.

