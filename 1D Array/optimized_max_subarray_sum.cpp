#include<iostream>
using namespace std;
 
 int main(){
 	
 	int a[1000]={0};
 	int cs[1000]={0};
 	int n;
 	
 	cout<<"Enter the number of elements : ";
 	cin>>n;
 	
 	//Enter the array elements 
 	
 	cout<<"\n Enter the first element of array : ";
 	cin>>a[0];
 	cs[0]=a[0];
 	cout<<"\n Enter the rest of the elements : ";
 	
 	 	for(int i=1;i<n;i++){
 		cin>>a[i];
 		cs[i]=cs[i-1]+a[i];
	 }
	 
	 //Generate the sub arrays sum(max)
	 int maxsum=0;
	 int left,right=0;
	 for(int i=0;i<n;i++){
	 	for(int j=i;j<n;j++){
	 		int cursum=0;
	 		cursum=cs[j]-cs[i-1];
	 		if(maxsum<cursum){
	 			maxsum=cursum;
	 			left=i;
	 			right=j;
			 }
	 		
		 }
		 
	 }
	 cout<<"Maximum Subarray Sum is : "<<maxsum<<endl;
	 //printing the subarray
	 cout<<"Subarray is : "<<endl;
	 for(int k=left;k<=right;k++){
	 	cout<<a[k]<<",";
	 }
	 return 0;
 }
