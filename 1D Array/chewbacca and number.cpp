#include<iostream>
using namespace std;

int main(){
	
	char a[50]; //char array mei islie kuki iteration asan hai ismei
	int i=0;
	cin>>a;
	
	if(a[0]=='9'){
		i++;
	}
	
	
	for(;a[i]!='\0';i++){
		
		int digit= a[i]-'0'; //convert the char to int . here subtraction occurs in the ascii values.
		if(digit>=5){
			digit=9-digit;
		}
		a[i]=digit+'0';// int to character conversion
	}
	cout<<a;
}
