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
Vector2d::operator std::string() const {
	return "(" + std::to_string(this->x) + "; " + std::to_string(this->y) + ")";
}

Vector2d Vector2d::operator+(const Vector2d & v) const{
	return Vector2d(this->x + v.x, this->y + v.y);
}

Vector2d Vector2d::operator-(const Vector2d & v) const {
	return Vector2d(this->x - v.x, this->y - v.y);
}

Vector2d Vector2d::operator*(double n) const{
	return Vector2d(this->x * n, this->y * n);
}
Vector2d operator*(double n, Vector2d& v) {
	return v * n;
}

double Vector2d::operator*(const Vector2d& v) const {
	return this->x*v.x + this->y*v.y;
}

Vector2d& Vector2d::operator++() {
	this->x++;
	this->y++;
	return *this;
}

Vector2d Vector2d::operator++(int) {
	Vector2d temp(this->x, this->y);
	this->x++;
	this->y++;
	return temp;
}
Vector2d& Vector2d::operator--() {
	this->x--;
	this->y--;
	return *this;
}
Vector2d Vector2d::operator--(int) {
	Vector2d temp(this->x, this->y);
	this->x--;
	this->y--;
	return temp;
}

const Vector2d& Vector2d::operator+=(const Vector2d& v) {
	this->x += v.x;
	this->y += v.y;
	return *this;
}
const Vector2d& Vector2d::operator+=(double n) {
	this->x += n;
	this->y += n;
	return *this;
}

const Vector2d& Vector2d::operator-=(const Vector2d& v) {
	this->x -= v.x;
	this->y -= v.y;
	return *this;
}
const Vector2d& Vector2d::operator-=(double n) {
	this->x -= n;
	this->y -= n;
	return *this;
}

const Vector2d& Vector2d::operator*=(double n) {
	this->x *= n;
	this->y *= n;
	return *this;
};

double Vector2d::len(){
	return sqrt(this->x * this->x + this->y * this->y);
}
double Vector2d::angle(Vector2d& v){
	return acos((this->x * v.x + this->y *v.y) / (this->len()*v.len()))*180/PI;
}
