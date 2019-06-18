#include<iostream>
using namespace std;
int main(){
	
	char a[100]={'a','b','c'}; /*in this declaration output is abc since our array is terminated by a null character
	 but it can also print abc then garbage value so it is always welcomed to insert a null character at the end like :*/
	cout<<a<<endl;
	char b[100]={'a','b','c','\0'};
	cout<<b<<endl;
	//to avoid such situations we can use another method of declaration

	char c[]="abc";
	cout<<c<<endl;	
	//or
	char d[100]="cdhvj";
	cout<<d<<endl;
	//input functions
	
	cin>>a; //it is used when a single character or word is to be read. It terminates as soon as it encounters spaces.
	
	cout<<"Enter anything :";
	cin.getline(b,100,'.'); //the third parameter is the delimiter which is \n by default but we can take any.
	cout<<b<<endl;
	cout<<a<<endl;
	
	
	
	
	return 0;
}
