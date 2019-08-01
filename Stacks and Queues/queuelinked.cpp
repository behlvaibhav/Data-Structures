#include<iostream>
using namespace std;

//linked list implementation of queue

class node{
	public:
		node*next;
		int data;
		node(int d){
			data=d;
			next=NULL;
		}
};
//insertion at tail
void enqueue(node*&head,node*&tail,int data){
	//if list is empty
	node*n=new node(data);
	if(head==NULL){
		head=n;
		tail=head;
	}
	tail->next=n;
	tail=n;
}
//deletion from front
void dequeue(node*&head){
	if(head==NULL){
		cout<<"nothing to be deleted ";
	}
	node*temp=head;
	head=head->next;
	delete temp;
	
}

//printing the queue
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	
}

int main(){
	
	node*head=NULL;
	node*tail=NULL;
	enqueue(head,tail,10);
	enqueue(head,tail,20);
	enqueue(head,tail,30);
	enqueue(head,tail,40);
	print(head);	
	dequeue(head);
	cout<<endl;
	print(head);
	return 0;
	
}
