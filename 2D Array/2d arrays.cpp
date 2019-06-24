#include <iostream>
using namespace std;
int main(){
	
	int **arr=new int*[3];//creating the primary array in the heap area.
	
	for(int i=0;i<3;i++){
		
		arr[i]=new int[4];
	} //creating the secondary arrays for each primary array

	int counter=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			
			arr[i][j]=counter;
			counter++;
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			
		cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	//deallocating the memory. so for deallocation we need to remove the secondary arrays first then we will delete the primary array.
	
	for(int i=0;i<3;i++){
		delete [] arr[i]; //removed the secondary arrays
	}
	
	delete [] arr; //primary array removed
	
	cout<<"It Worked";
	return 0;



}




