#include "pch.h"
#include <iostream>
#include "Vector2d.h"
using namespace std;

int main()
{
	Vector2d v0 = Vector2d();
	Vector2d v1 = Vector2d(6, 9);
	Vector2d v2 = Vector2d(8, 12, 8, 11);
	Vector2d result;

	cout << "zero vector (coordinates): ";
	v0.printCoor();
	cout << "1 vector (coordinates): ";
	v1.printCoor();
	cout << "2 vector (coordinates): ";
	v2.printCoor();

	cout << "sum: ";
	result = v1;
	result.sum(v2);
	result.printCoor();

	cout << "subtraction: ";
	result = v1;
	result.sub(v2);
	result.printCoor();

	cout << "multiplication vector 1 by 4: ";
	result = v1;
	result.mult(4);
	result.printCoor();
	
	cout << "copy v2: ";
	Vector2d copy = v2;
	copy.printCoor();

	result = v1;
	cout << "scalar multiplication: " << result.scalarMult(v2) << endl;
	
	cout << "length of vector 1: " << v1.len(v1) << endl;
	cout << "length of vector 2: " << v2.len(v2) << endl;

	cout << "angle b/w v1 and v2: " << v1.angle(v2) << endl;

}

