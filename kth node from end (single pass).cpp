#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    
    //Constructor
    node(int d){
        data = d;
        next = NULL;
    }
};
 
void insertAtHead(node*&head,int data){
    node*n = new node(data);
    n->next = head;
    head = n;
}

int length(node*head){
    
    int len=0;
    while(head!=NULL){
        head = head->next;
        len += 1;
    }
    return len;
}

void insertAtTail(node*&head,int data){
    
    if(head==NULL){
        head = new node(data);
        return;
    }
    node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void insertInMiddle(node*&head,int data,int p){
    
    if(head==NULL||p==0){
        insertAtHead(head,data);
    }   
    else if(p>length(head)){
        insertAtTail(head,data);
    }
    else{
        //Insert in the middle 
        //Take p-1 jumps
        int jump=1;
        node*temp = head;
        while(jump<=p-1){
            temp = temp->next;
            jump += 1;
        }
        
        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;
        
    }
}


void print(node*head){
    //node*temp = head;
    
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}

node* kth_node_from_end(node*head, int k){
    node*slow = head;
    node*fast = head;
    while(k!=0){
        fast=fast->next;
        k--;
    }
    while(fast!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
    
}

void reverse(node*&head){
    
    node*C = head;
    node*P = NULL;
    node*N;
    
    while(C!=NULL){
        //Save the next node 
        N = C->next;
        //Make the current node point to prev 
        C->next = P;
        //Just update prev and current
        P = C;
        C= N;
    }
    head = P;
}

node* reverseRec(node*head){
    //Base Case 
    if(head->next==NULL||head==NULL){
        return head;
    }
    //Rec Case
    node*smallHead = reverseRec(head->next);
    node*C = head;
    C->next->next = C;
    C->next = NULL;
    return smallHead;
    
}

int main() {
    node*head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtTail(head,6);
    insertAtTail(head,8);
    insertAtTail(head,0);
    insertInMiddle(head,2,3);
    print(head);
    //head = reverseRec(head);
    //print(head);
    int k=3;
    
    node*m = kth_node_from_end(head, k);
    cout<<m->data;
    
    return 0;
}
