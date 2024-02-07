#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this-> prev = NULL;
        this->next= NULL;
    }
};
//traversing a doubly linked list
void print(Node* head){
    Node* temp = head;

    while (temp !=NULL)     
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
//length of doubly linked list
// int getLength(Node* head){
//     int len=0;
//     Node* temp = head;

//     while (temp !=NULL)     
//     {
//         len++;
//         temp=temp->next;
//     }
//     return len;    
// }

void insertAtHead(Node* &tail,Node* &head, int d){

    if(head==NULL){
    Node* temp = new Node(d);
    head= temp;
    tail=temp;
    }
    else{

    Node* temp = new Node(d);
    temp-> next = head;
    head-> prev = temp;
    head= temp;
    }

}

void insertAtTail(Node* &tail,Node* &head, int d){

    if(tail==NULL){
     Node* temp = new Node(d);
     tail=temp; 
     head=temp;
    }
    else{

    Node* temp = new Node(d);
    temp->prev= tail;
    tail->next=temp;
    tail= temp;
    }
}

void InsertAtPosition(Node* &tail, Node* &head, int position, int d){
    //insert at start
    if(position==1){
        insertAtHead(tail, head,d);
        return;
    }

    Node* temp= head;
    int cnt=1;
    
    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //insert at last position
    if(temp->next==tail){
        insertAtTail(tail,head,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert= new Node(d);

    nodeToInsert-> next= temp->next;
    temp->next->prev= nodeToInsert;
    temp-> next = nodeToInsert;
    nodeToInsert-> prev=temp;
}

int main(){
    
    // Node* node1= new Node(10);
    // Node* head= node1;
    // Node* tail= node1;
    Node* head= NULL;
    Node* tail= NULL;
    print(head);
    // cout<<getLength(head)<<endl;
    insertAtHead(tail,head, 11);
    print(head);
    insertAtTail(tail,head, 15);
    print(head);
    InsertAtPosition(tail, head, 2, 45);
    print(head);
    return 0;
}