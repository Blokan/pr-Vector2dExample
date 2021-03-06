#include "pch.h"
#include <iostream>
#include "Vector2d.h"
using namespace std;

int main()
{
	Vector2d v0 = Vector2d();
	Vector2d v1 = Vector2d(6, 9);
	Vector2d v2 = Vector2d(8, 12, 8, 11);
	int n = 4;

	cout << "zero vector (coordinates): " << string(v0) << endl;
	cout << "a (coordinates): " << string(v1) << endl;
	cout << "b (coordinates): " << string(v2) << endl;

	cout << "\na + b = " << string(v1 + v2) << endl;
	cout << "a - b = " << string(v1 - v2) << endl;
	cout << "a * n (n = "<<n <<") = " << string(v1 * n) << endl;
	cout << "a * b (scalar multiplication): " << v1*v2 << endl;

	cout << "\nv0++: "; v0++; cout << " v0 = " << string(v0) << endl;
	cout << "++v0: "; ++v0; cout << " v0 = " << string(v0) << endl;
	cout << "v0--: "; v0--; cout << " v0 = " << string(v0) << endl;
	cout << "--v0: "; --v0; cout << " v0 = " << string(v0) << endl;

	v0 = Vector2d(2, 3);
	cout << "\nc = " << string(v0) << " n = " << n << endl;
	cout << "c *= n: "; v0*=n; cout << " c = " << string(v0) << endl;
	cout << "c += n: "; v0 += n; cout << " c = " << string(v0) << endl;
	cout << "c += a: "; v0 += v1; cout << " c = " << string(v0) << endl;
	cout << "c -= n: "; v0 -= n; cout << " c = " << string(v0) << endl;
	cout << "c -= a: "; v0 -= v1; cout << " c = " << string(v0) << endl;
	
	
	cout << "\nlength of a: " << v1.len() << endl;
	cout << "length of b: " << v2.len() << endl;
	cout << "angle b/w a and b: " << v1.angle(v2) <<" degrees"<< endl;
	return 0;
}

