#include<iostream>
#include<vector> 
#include<algorithm> // to use sort method
using namespace std;
int main(){
	
	vector<int>v;
	v.reserve(100); 
	/*itna space toh rhega ismei agr yh bi khtm tbh resize hoga resize function use karna bttr hota hai kuki yh kam expensive hota hai . 
	expensive kam islie kuki ismei fr ismei doubling ni hogi to elements copy ni krne pdege*/
	int n;
	cin>>n;
	//add elements usimg push_back
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		v.push_back(temp); //v[i] islie ni use kia kuki vo box exist ni krta 
	}
	
	v.pop_back();//element from end will be removed
	sort(v.begin(),v.end());//sort the vector
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
	//v.clear(); it will remove all the elements from the array
	cout<<v.capacity()<<endl; //it will tell the maximum capacity of the vector which is here 100
	cout<<v.max_size()<<endl; //gives us the maximum size a vector can take depends on the system
	
	return 0;
}
