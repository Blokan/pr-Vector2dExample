#pragma once
#include <string>
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

	void printCoor(void);
	operator std::string() const;

	Vector2d operator+(const Vector2d & v) const;
	Vector2d operator-(const Vector2d & v) const;
	Vector2d operator*(double n) const;
	friend Vector2d operator*(double n, const Vector2d& v);
	double operator*(const Vector2d& v) const;

	Vector2d& operator++();
	Vector2d operator++(int);
	Vector2d& operator--();
	Vector2d operator--(int);

	const Vector2d& operator+=(const Vector2d&);
	const Vector2d& operator+=(double n);
	const Vector2d& operator-=(const Vector2d&);
	const Vector2d& operator-=(double n);
	const Vector2d& operator*=(double n);

	double len();
	double angle(Vector2d&);
};

