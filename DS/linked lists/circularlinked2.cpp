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

//finding a node to be deleted

node* getnode(node*head,int data){
	node*temp=head;
	while(temp->next!=head){
		if(temp->data==data) return temp;
		temp=temp->next;
	}
	if(temp->data==data) return temp;
	else
	return NULL;
}

//deleting a node
void deletenode(node*&head,int data){
	node*del=getnode(head,data);
	
	if(del==NULL){
		cout<<"Node not found "<<endl;
		return;
	}
	if(head==del){
		head=del->next;
	}
	node*temp=head;
		while(temp->next!=del){
			temp=temp->next;
				}
	temp->next=del->next;
	delete del;
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
	cout<<endl;
	deletenode(head,7);
	print(head);
	return 0;
}
