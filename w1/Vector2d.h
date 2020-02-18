#pragma once
class Vector2d
{
private:
	double x, y;
public:
	Vector2d();
	Vector2d(double, double);
	Vector2d(double, double, double, double);
	Vector2d(const Vector2d&);
	~Vector2d();

	void setx(double);
	double getx();
	void sety(double);
	double gety();

	void print(void);
	void printCoor(void);

	void sum(Vector2d);
	void sub(Vector2d);
	void mult(double);
	double scalarMult(Vector2d);
	double len(Vector2d);
	double angle(Vector2d&);

	//Vector2d();
};

