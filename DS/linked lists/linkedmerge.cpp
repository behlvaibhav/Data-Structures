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
	//function will build list after you enter -1 in the input
	
	void buildList(node*&head){
		int data;
		cin>>data;
		while(data!=-1){
			insertAtTail(head,data);
			cin>>data;
		}
	}
	
	// merging two sorted lists
	node* merge(node*a,node*b){
		
		//base case
		if(a==NULL){
			return b;
		}
		
		else if(b==NULL){
			return a;
		}
		
		node*c; // always points to new head
		if(a->data<b->data){
			c=a;
			c->next=merge(a->next,b);
		}
		else{
			c=b;
			c->next=merge(a,b->next);
			
		}
		return c;
	}
	
	
	void print(node*head){
		while(head!=NULL){
			cout<<head->data<<"->";
			head=head->next;
		}
	}
	
	int main(){
		node*head1=NULL;
		node*head2=NULL;
		buildList(head1);
		print(head1);
		cout<<endl;
		buildList(head2);
		print(head2);
		cout<<endl;
		node*m=merge(head1,head2);
		print(m);
		return 0;
	}
	
