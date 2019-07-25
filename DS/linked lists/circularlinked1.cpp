#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		//constructor
		node(int data){
			this->data=data;
		}
};

void insertnode(node*&head,int data){
	node*temp=head;
	node*n=new node(data);
	n->next=head;
	
	if(head!=NULL){
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=n;
	}
	else{
		n->next=n;
	}
	head=n;
}

void print(node*head){
	node*temp=head;
	while(temp->next!=head){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<temp->data;
}

int main(){
	node*head=NULL;
	insertnode(head,6);
	insertnode(head,5);
	insertnode(head,4);
	insertnode(head,3);
	insertnode(head,2);
	insertnode(head,1);
	insertnode(head,7);
	print(head);
	return 0;
}
