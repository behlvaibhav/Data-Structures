#include<iostream>
#include<vector>
using namespace std;

class Stack{
	private:
		vector<int>v;
	
	public:
		void push(int data){
			v.push_back(data);
		}
		
		bool empty(){
			return v.size()==0;// returns true if size of the vector is 0.
		}
		void pop(){
			if(!empty()){
				v.pop_back();
			}
		}
		
		int top(){
			return v[v.size()-1];
		}
};

int main(){
	Stack s;
	
	for(int i=1;i<=5;i++){
		s.push(i*i);
	}
	
	//printing each element while popping them
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}
