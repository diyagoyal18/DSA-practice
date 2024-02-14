//dry code


#include<iostream>
#include<map>
using namespace std;
//in circular linked list, there is no need of head pointer, only tail pointer is used
class Node{
    public:
    int data;
     Node* next;

     //constructor
     Node(int d){
        this-> data= d;
        this->next=NULL;
     }

     ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next= NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
     }
};

void insertNode(Node* &tail, int element, int d){
    //assuming that the element is present in the list

    //empty list
    if(tail==NULL){
        Node* newNode= new Node(d);
        tail = newNode;
        newNode -> next= newNode;
    }
    else{
        //non empty list
        Node* curr= tail;

        while (curr->data!=element)
        {
            curr= curr-> next;
        }
        //element found, curr is representing element wala node
        Node* temp= new Node(d);
        temp->next= curr->next;
        curr->next =temp;
    }
}
void print(Node* &tail){
    Node* temp = tail;

    if(tail==NULL){
        cout<<"list is empty"<<endl;
    }

    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
    
}
void deleteNode(Node* &tail, int value){
    //empty list
    if(tail==NULL){
        cout<<"The list in empty"<<endl;
        return;
    }
    else{
        //non empty
        Node* prev= tail;
        Node* curr= prev->next;

        while (curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }

        prev->next = curr->next;
        //1 node linked list
        if(curr==prev){
            tail=NULL;
        }
        
        //>=2 node linked list
        else if (tail==curr)
        {
            tail= prev;
        }
        
        curr->next= NULL;
        delete curr;
        
    }
}

bool isCircularList(Node* head){
    if(head==NULL){
        return true;
    }
    Node* temp= head->next;
    while (temp!= NULL && temp!=head){
        temp=temp->next;

    }
    if(temp==head){
        return true;
    }
    return false;
    
}
bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
     map<Node*, bool> visited;
    Node* temp = head;

    while (temp !=NULL) 
    {
        if(visited[temp]== true){
            cout<<"present on element "<<temp->data<<endl;
            return true;
        }
        visited[temp]= true;
        temp= temp-> next;
    }
    return false;
}


//or

Node* floydDetectLoop(Node* head){
    if(head== NULL){
        return NULL;
    }
    Node* fast= head;
    Node* slow= head;

    while (slow != NULL && fast != NULL)
    {
        fast= fast->next;
        if(fast!= NULL){
            fast= fast-> next;
        }
        slow= slow-> next;

        if(slow==fast){
            return slow;
        }
        
    }
    return NULL;

    
}




int main(){
    Node* tail = NULL;


    //inserting in empty list
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 2);
    print(tail);
    insertNode(tail, 2, 5);
    print(tail);

    // deleteNode(tail, 2);
    // print(tail);
    //  deleteNode(tail, 5);
    // print(tail);
    //  deleteNode(tail, 3);
    // print(tail);
    if(floydDetectLoop(head !=NULL)){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"cycle not present"<<endl;
    }
    return 0;
}