#include<iostream>
using namespace std;

/*idea is that the current size should always be less than the maximum size and cs>0. to shift the rear pointer to starting index we use %.*/

template<typename T>

class Queue{
	T *arr;
	int f;
	int r;
	int ms; //maximum size
	int cs; //current size
	public:
		Queue(int ds=4){
			f=0;
			ms=ds;
			r=ms-1;
			arr= new T[ms];
			cs=0;
		}

	bool isFull(){
		return cs==ms; //if cs==ms it will return true
	}
		
	bool isEmpty(){
		return cs==0;
	}
	
	// pushing an element into queue
	void enqueue(T data){
		if(!isFull()){
			r=(r+1)%ms;
			arr[r]=data;
			cs++;
		}
	}
	
	void dequeue(){
		if(!isEmpty()){
		f=(f+1)%ms;
		cs--;
		}
	}
	
	T front(){
		return arr[f];
	}
};

int main(){
	Queue<int>q(5);
	for(int i=1;i<=5;i++){
		q.enqueue(i);
	}
	q.dequeue();
	q.enqueue(8);
		
	while(!q.isEmpty()){
		cout<<q.front();
		q.dequeue();
	}
	return 0;
}
