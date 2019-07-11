#include<iostream>
using namespace std;
//here we are passing the array to the pointer and the number of elements. 
bool isSorted(int *a,int n){
	if(n==1){
		return true;
	}
	if(a[0]<a[1]&&isSorted(a+1,n-1)){ //we are reducing the array into smaller array
		return true;
	}
	return false;
}

int main(){
	int a[]={1,2,13,5,7};
	int n=5;
	if(isSorted(a,n)){
		cout<<"Yes Sorted";
	}
	cout<<"Not Sorted";
	return 0;
}
