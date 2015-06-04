//Pre-processors

//Any app you make you will need iostream
#include "stdafx.h"
#include <iostream>
#include <string>






//default constructor
//constructor and deconstructor must have the same name as the class
class Vector3
{
public:
	Vector3()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	Vector3(float _x, float _y, float _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}
	//deconstructor has a ~ infront of the name
	//if you grab memory with the construtor you must deconstruct in the deconstructor
	~Vector3()
	{

	}

private:
	float x, y, z;
};


//methods of passing information

//method 1
void Example_passbyvalue(Vector3 vector)
//This is a copy of Vector3
{

}

//method 2
// * = pointer

void Example_passbypointer(Vector3* vectorPtr)
//This directs us to a point in memory

{

}

//method 3
// & = reference
void Example_passbyreference(Vector3& vectorRef)
//references can't be invaild (location on memory)
//default to &
{

}

//method 4
//const _____* = constref
void Example_passbyconstreference(const Vector3& vectorRef)
//reference location WITHOUT changing
{
	
}


//everything in a class private
//everything in a struct is public
//everything in a union is public

struct vector2
{
	float x, y;
};

union NumberUnion
{
	float floatValue;
	int intValue;
};


// data inputed as a float can be read as a int



int _tmain(int argc, _TCHAR* argv[])
{
	//0x = hex
	int intValue = 0x5;
	float floatValue = 1.1f;
	//double is mainly used for small numbers
	double doubleValue = 1.5;
	std::string stringValue = "test";

	// auto = C# var
	//Don't care what type to use then use auto
	auto autoMagicInt = 5;
	auto autoMagicString = "test";

	// unsigned and signed

	//signed o-258
	int hexvalue = 0xFFFFFFFF;

	//unsigned -128 - 127
	//unsigned int hexvalue = 0xFFFFFFFF;

	//clear's all data in hexvalue's int pos 5

	//method 1
	int hexvalue2 = hexvalue & 0xFFFF0FFF;

	//method 2
	hexvalue2 = hexvalue & ~(0x0000F000);

	//method 3
	hexvalue2 = hexvalue | 0x0000F000;

	if ((hexvalue == 0xFFFFFFFF) && (hexvalue2 == 0xFFFFFFFF))
	{

	}

	// 8 bit unsigned integer
	//   1  1  1  1 1 1 1 1
	// 128 64 32 16 8 4 2 1

	//nimble = half a bit
	


	// cout = character output
	// endl = end line
	// anytime you want to end a line use endl
	//std = standard

	std::cout << "hello World" << std::endl;


	NumberUnion testUnion;
	testUnion.floatValue = 53;
	std::cout << testUnion.intValue << std::endl;

	Vector3 myVector3 = Vector3(1, 2, 3);

	Example_passbyvalue(myVector3);
	Example_passbypointer(&myVector3);
	// & used by pointers to find the address
	Example_passbyreference(myVector3);
	Example_passbyconstreference(myVector3);

	return 0;
}


//F5 = Debug
//F9 = Record position
//F10 = Next line(while debugging)
