#include <iostream>
#include <string>

using namespace std;
int main(void) {
	/*
 int number;
 cout << "Enter a decimal number: ";
 cin >> number;
 cout << "The number you entered is " << number <<"." << endl;
 
  cout << "Hello, World! I am " << 18 << " Today!" << endl;
  */
  
  /*
  string name;
  
  cout << "Your name please:";
  
  cin>>name;
  
  string hello = "Hello, "+name+".";
  
//  name = "Hello, "+name;
  
  cout<<name<<endl;
  cout<<hello<<endl;
  */
  
  /*
  
  string name;
  
  cout << "Your name plaese: ";
  
  cin >> name;
  
  int len = name.length();
  
  string hello = "Hello, " + name + ".";
  
  cout << hello << endl;
  cout<< "The length of "<<name<<" is "<<len<<endl;
    */
    
    //string *p = null;
    
    string s1 = "hello";
    string s2;
    
    s2 = s1; // s2 becomes "hello"
    
    cout << "s2=" << s2 << endl;
	
	s2 = "bye";
	
	cout << "s1=" << s1 << endl;
	
	cout << "s2=" << s2 << endl;  
	
	string *p1 = &s1;
	
	string *p2;
	
	p2 = p1;
	
	cout << "*p2=" << *p2 << endl;
	
	*p2 ="bye";
	
	cout << "*p1=" << *p1 << endl;
	
	cout << "*p2=" << *p2 << endl; 
	
	//count << "s1= " << s1 << endl;
    
  return 0;
 

 
} 
