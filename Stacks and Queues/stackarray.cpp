#include<iostream>
using namespace std;

//inserting an element
void push(int&top,int data,int a[]){
	top=top+1;
	a[top]=data;
}

//deleting element
void pop(int&top,int a[]){
	if(top==0){
		return;
	}
	cout<<"removing the topmost element ....."<<endl;
		top=top-1;
}
 
//used to view the topmost element
void topp(int top, int a[]){
	cout<<"\n Topmost element is ...."<<endl;
	cout<<a[top]<<endl;
}
 void print(int top,int a[]){
 	while(top!=0){
 		cout<<a[top]<<",";
 		top--;
	 }
 }
int main(){
	int top=0;
	int a[100];
	push(top,8,a);
	push(top,7,a);
	push(top,6,a);
	print(top,a);
	cout<<endl;
	pop(top,a);
	print(top,a);
	topp(top,a);
	return 0;
}
