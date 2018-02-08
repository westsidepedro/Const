//============================================================================
// Name        : Const.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal
    {
    private:
	string name;

    public:
	void setName(string name)
	    { //in-line implementation
	    this->name = name;
	    }
	;

	void speak() const	// now this is method is "safe" or "not changeable
	    { //in-line implementation
	    cout << "my Name is: " << name << endl;
	    }
	;
    };

int main()
    {
    int value = 7;
    value = 10; // Error with: const int value = 7; const will not let value change in 'value'

    const double PI = 3.141592;	// common to use CAPS for anything that is const

    cout << value << endl;
    cout << PI << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////

    Animal dog;

    dog.setName("Bill");
    dog.speak();

    ///////////////////////////////////////////////////////////////////////////////////////////////////

    int test = 817;

    //const int *pTest = &test;	// read backwords "pointer to an int that is constant"
    int * const pTest = &test; // read backwards "constant pointer to an int"

    cout << *pTest << endl; // what is inside (*) the address of 'test'

    int number = 215;
    pTest = &number; //now pTest is the address of 'number'
		     // error with this: int * const pTest = &test;

    cout << *pTest << endl; //what is inside (*) the address of 'number'



    *pTest = 555; // what is in the address of 'number' is going to be 555 now
		  // error with this: const int *pTest = &test;

    cout << *pTest << endl; //what is inside (*) the address of 'number'

    return 0;
    }
