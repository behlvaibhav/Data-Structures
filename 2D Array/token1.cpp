#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	char str[]= "Hi, My name is Vaibhav Behl";
	char *ptr;
	ptr=strtok(str," ,");//strtok contains static vraiable which stores state of string from previous call.
	
	while(ptr!=NULL){
	
	cout<<ptr<<endl;
	ptr=strtok(NULL," ,");// NULL as a parameter signifies extract strings from the original strings.
	
	}
	return 0;
}

/*on first call function expects cstring as argument for str and for subsequent calls it expects null pointer*/
