#include<iostream>
using namespace std;

int main(){
	
	int *p=new int(20);
	cout<<*p<<endl;
	
	int *q=new int;
	cout<<*q<<endl;//garbage value will be printed
	
	//arrays
	int *arr = new int[20];
	
	for(int i=0;i<30;i++){
		arr[i]=i;
	}
	
	for(int i=0;i<30;i++){
		
		cout<<arr[i]<<" ";
	}
	//deleting the allocated memory
	
	delete p;
	delete q;
	delete [] arr;
	return 0;
}
