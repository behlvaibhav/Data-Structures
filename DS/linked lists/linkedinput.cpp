#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node*next;
		node(int d){
			data=d;
			next=NULL;
		}
};



//pass by reference
	void insertAtTail(node*&head,int data){
		//when list is empty
		if(head==NULL){
			head=new node(data); /* or node*n = new node(data);
										head=n;*/
			return;
		}
		node*tail=head;
		while(tail->next!=NULL){
			tail=tail->next;
		}
		tail->next=new node(data); /* or node*n=new node(data);
										 tail->next=n;*/
		return;	
	}
	
	//inputing to the list
	
	void buildList(node*&head){
		int data;
		cin>>data;
		while(data!=-1){
			insertAtTail(head,data);
			cin>>data;
		}
	}
	
	
	void print(node*head){
		while(head!=NULL){
			cout<<head->data<<"->";
			head=head->next;
		}
	}
	
	int main(){
		node*head=NULL;
		buildList(head);
		print(head);
		return 0;
	}
	
