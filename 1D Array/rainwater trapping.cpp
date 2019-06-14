/* in this problem we are given the total number of buildings and height of buildings. we need to compute the water stored kn between the buildings after rain.
sample input:10
heights: 0 2 1 3 0 1 2 1 2 1
output:5
logic is : if suppose for a building we need to compute the water stored then we will compare the adjacent buildings. the total water stored will be the 
minimum of the leftmost and rightmost buildings minus the height of current building*/
#include<iostream>
using namespace std;
int main(){
	int a[1000],left[1000],right[1000],water[1000]={0};
	
	int n;
	
	// Enter the number of buildings
	cout<<"Enter the number of buildings : ";
	cin>>n;
	
	cout<<"Enter the height of the buildings : "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// compute leftmost and rightmost largest arrays
		int lmax=0;
	for(int i=0;i<n;i++){
		if(lmax<a[i]){
			lmax=a[i];
	   }
	   left[i]=lmax;
	}
	
		int rmax=0;
	for(int i=n-1;i>=0;i--){
		if(rmax<a[i]){
			rmax=a[i];
		}
		right[i]=rmax;
	}
	/* printing the leftmost and rightmost arrays
	for (int i=0;i<n;i++){
		
		cout<<left[i]<<",";
	}
	cout<<endl;
		
	for (int i=0;i<n;i++){
		
		cout<<right[i]<<",";
	}
	
	cout<<endl;
	*/
	int sum=0;
	//compute the units of water stored for every building
	for(int i=0;i<n;i++){
		water[i]=min(left[i],right[i])-a[i];
		cout<<water[i]<<",";
		sum= sum+water[i];
	}
	
	cout<<"\nTotal units of water stored after rain : "<<sum<<endl;
	
	return 0;
}
