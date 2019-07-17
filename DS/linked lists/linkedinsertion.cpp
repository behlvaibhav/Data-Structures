#include<iostream>
using namespace std;

class node{
public:
int data;
node*next;
//self referential class since node*n is pointing to the objects of same class
node(int d){
	data = d;
	next=NULL;
	}
};

//pass by reference since we want the changes shoul be reflected in main.
void insertAtHead(node*&head,int data){
	node*n=new node(data);
	n->next=head;
	head=n; //n is a static pointer which is destroyed here
}
//pass by value because, suppose you want to print it two times then second time you will not be able to print the list as head will contain null
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
}

int main(){
	node*head=NULL;
	insertAtHead(head,5);
	insertAtHead(head,4);
	insertAtHead(head,3);
	print(head);
	
	return 0;
	
}
