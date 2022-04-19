// C++ program to demonstrate 
// accessing of data members 

#include <bits/stdc++.h> 
using namespace std; 
class Geeks 
{ 
	// Access specifier 
	public: 

	// Data Members 
	int number; 
	bool cheak;

	// Member Functions() 
	void evenodd() 
	{ 
		if(cheak)
			cout << "Number is odd"<<endl;
		else
			cout << "Number is even"<<endl;
	} 
}; 

int main() { 

	// Declare an object of class geeks 
	Geeks obj1; 

	// accessing data member 
	cin >> obj1.number; 
	obj1.cheak = obj1.number%2;
	// accessing member function 
	obj1.evenodd(); 
	return 0; 
} 

