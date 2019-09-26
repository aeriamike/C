#include<iostream>
using namespace std;
#include <list>
#include<string>

int main(){
	
	list<string>s;
	s.push_back("hello");
	s.push_back("hello");
	s.push_back("hello");
	s.push_back("hello");
	s.push_back("hello");
	
	list<string>::iterator p;
	for(p=s.begin();p!=s.end();p++){
		cout<<*p<<" ";
	cout<<endl;
	}
	return 0;
}
