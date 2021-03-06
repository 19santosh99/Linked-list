#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int d){
        data = d ;
        next = NULL;
    }
};
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}
void insertAtHead(node*&head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node*n = new node(data);
	node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    
}

node* oddEven(node* head){
	node* oddHead = NULL;                       // if element is odd add to odd list else add to even list
	node* evenHead = NULL;

	while(head!=NULL){                          // iterating over all elements
		if(((head->data)&1)==1){
			
				insertAtHead(oddHead, head->data);			
		}
		else{
			insertAtHead(evenHead, head->data);
		}
		head=head->next;
	}
  if(oddHead==NULL)
    oddHead=evenHead;
    else{
	  node*temp = oddHead;                                    // connecting odd and even lists
	  while(temp->next!=NULL){
	     temp = temp->next;
	  }
	  temp->next = evenHead;
    }
    return oddHead;
}
int main()
{
	node* head = NULL;
	int n;
    cin>>n;
	int data;
	while(n--){
		cin>>data;
		insertAtHead(head, data);
	}
	node* last = NULL;
	last = oddEven(head);
	print(last);
	return 0;
}
