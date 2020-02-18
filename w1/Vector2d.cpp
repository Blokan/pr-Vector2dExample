#include "pch.h"
#include "Vector2d.h"
#include "Math.h";
#include "iostream";
#define PI 3.14159265  

Vector2d::Vector2d(){ //0
	this->x = 0;
	this->y = 0;
}
Vector2d::Vector2d(double x, double y){ //(,)
	this->x = x;
	this->y = y;
}
Vector2d::Vector2d(double x1, double x2, double y1, double y2) { //(,)
	this->x = x2-x1;
	this->y = y2-y1;
}
Vector2d::Vector2d(const Vector2d&v) {//c
	this->x = v.x;
	this->y = v.y;
}
Vector2d::~Vector2d(){}

void Vector2d::setx(double x) {
	this->x = x;
}
double Vector2d::getx() {
	return this->x;
}
void Vector2d::sety(double y) {
	this->y = y;
}
double Vector2d::gety() {
	return this->y;
}

void Vector2d::printCoor() {
	std::cout <<"("<< x << "; " << y <<")"<< std::endl;
}
void Vector2d::print() {
	std::cout << x << " " << y << std::endl;
}

void Vector2d::sum(Vector2d v){
	x = x + v.x;
	y = y + v.y;
}
void Vector2d::sub(Vector2d v) {
	x = x - v.x;
	y = y - v.y;
}
void Vector2d::mult(double n) {
	x = x * n;
	y = y * n;
}
double Vector2d::scalarMult(Vector2d v) {
	return this->x*v.x + this->y*v.y;
}
double Vector2d::len(Vector2d){
	return sqrt(this->x * this->x + this->y * this->y);
}
double Vector2d::angle(Vector2d& v){
	return acos((this->x * v.x +this->y *v.y )/ (sqrt(this->x * this->x + this->y * this->y) * sqrt(v.x * v.x + v.y * v.y)))*180/PI;
}
