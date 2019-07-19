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

void insertAtHead(node*&head,int data){
	node*n= new node(data);
	n->next=head;
	head=n;
}
int length(node*head){
	int len=0;
	while(head!=NULL){
		head=head->next;
		len++;	
	}
	return len;
}

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

//in the middle
/*here p is the position after which node is to be inserted. Now here if we want to insert after the 2 node then p=2 and temp pointer
is to be moved 1 position further. if p=3 then temp is to be moved 2 positions, so clearly p-1 jumps are to be taken.*/

//pass by reference
void insertInMiddle(node*&head,int data,int p){
	//when list is empty
	if(head==NULL||p==0){
		insertAtHead(head,data);
	}
	//when position is at the last
	else if(p>length(head)){
		insertAtTail(head,data);
	}
	//insert at middle
	//p-1 jumps
	else{
		node*temp=head;
		int jump=0;
		while(jump!=p-1){
			temp=temp->next;
			jump+=1;
		}
		node*n=new node(data);
		n->next=temp->next;
		temp->next=n;
		
	}
	}
	
	//reversing the linked list
	void reverse(node*&head){
		node*c=head; //current node
		node*p=NULL; //previous node
		node*n; //next node
			
		while(c!=NULL){
			n=c->next; // save next node
			c->next=p; // make current node point previous
			//updating the prev and current node
			p=c;
			c=n;
		}	
		head=p;
			
			}
	
	
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
		insertAtTail(head,6);
		insertAtTail(head,7);
		insertInMiddle(head,2,2);
		print(head);
		reverse(head);
		cout<<endl;
		print(head);
		return 0;
	}
