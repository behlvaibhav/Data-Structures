#include<iostream>
using namespace std;

int main(){
	
	int a[1000]={0};
	int cs,ms=0;//here cs is current sum and ms is maxsum
	int n;
	cout<<"Enter the number of array elements :";
	cin>>n;
	
	//Entering the array elements
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	/*kadane's algorithm
	if at amy point cs<0 then make cs=0 and after every iteration compare cs and ms. ms shoul always be maximum.
	cs is calculated by adding every element of a[i] to cs till cs>0*/
	
	for(int i=0;i<n;i++){
		cs=cs+a[i];
		
		if(cs<0){
			cs=0;
		}
		
		ms= max(cs,ms);
	}	
	
	cout<<"\n Maximum sum is : "<<ms<<endl;
	return 0;
	
}
	
