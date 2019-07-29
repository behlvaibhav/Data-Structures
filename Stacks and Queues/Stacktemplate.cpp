#include<iostream>
#include<vector>
using namespace std;

/*to reuse the code for any type of data or to create a generalize code, c++ provide concept of template. It can also be used for multiple types of data.
*/ 
template <typename T,typename U>
class Stack{
	private:
		vector<T>v;
		vector<U>v1;
	
	public:
		void push(T data){
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
		
		T top(){
			return v[v.size()-1];
		}
};

int main(){
	Stack<int,char>s;
	
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
