#include<iostream>

using namespace std;

int main(){
	int a[100];
	int i,j,k,n;
	
	// Enter the number of elements
	cout<<"Enter the number of elements";
	cin>>n;
	
	//Enter the elememts of array
	cout<<"\nEnter the array elements : ";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	int cursum=0;
	int maxsum=0;
	int left,right=0;
	//Generatng the maximum sum among sub-arrays 
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			for(k=i;k<=j;k++){
				cursum=cursum+a[k];
			}
		
			if(maxsum<cursum){
				maxsum=cursum;
				left=i;
				right=j;
			}
			cursum=0;
		}
	}
	cout<<maxsum<<endl;
	//printing the sub-array
	for(int z=left;z<=right;z++){
		cout<<a[z]<<",";
	}
	return 0;
	//getch();
}

