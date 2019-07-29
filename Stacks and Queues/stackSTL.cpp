/*stack as standard template library(STL). it has many methods but some imp ones are used below.
It can be used for any data type*/

#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<string>s;
	s.push("apple");
	s.push("mango");
	s.push("banana");
	
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}
