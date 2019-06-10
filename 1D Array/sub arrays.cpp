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
	
	//Generatng the sub-arrays
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			for(k=i;k<=j;k++){
				cout<<a[k];
			}
			cout<<endl;
		}
	}
	return 0;
	//getch();
}
