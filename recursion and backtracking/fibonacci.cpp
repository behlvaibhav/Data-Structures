#include<iostream>
using namespace std;

int fib(int n){
	if(n==0||n==1){
		return n;
	}
	int f1=fib(n-1);
	int f2=fib(n-2);
	return f1+f2;
}

int main(){
	int n;
	cout<<"Enter the index of fibonacci term whose value is to be known : ";
	cin>>n;
	cout<<fib(n);
	
	return 0;
}
