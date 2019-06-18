#include <iostream>
#include<cstring>

using namespace std;
int main(){
	
	string s("hello");
	cout<<s<<endl;
	
	string s1= "Another way ";
	cout<<s1<<endl;
	
	//taking string as input
	string s2;
	getline(cin,s2);
	
	// string array
	string arr[]={"apple","banana","mango","kiwi"};
	for(int i=0;i<4;i++){
		cout<<arr[i]<<",";
	}
	/* these were some important functions of string class*/
	
	return 0;
}
