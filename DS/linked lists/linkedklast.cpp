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
	
	//kth node from last
	node* klast(node* head,int k){
		if(head==NULL||head->next==NULL){
			return head;
		}
		int n=length(head);
		node*jump=head;
		for(int i=1;i<=n-k;i++){
			jump=jump->next;
		}
		return jump;
		
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
		insertAtTail(head,8);
		insertAtTail(head,7);
		insertInMiddle(head,2,2);
		print(head);
		cout<<endl;
		node* m=klast(head,3);
		cout<<m->data;
		return 0;
	}
