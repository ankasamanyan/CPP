#ifndef POINT_HPP
	#define POINT_HPP
#include <iostream>
#include <cmath>
#include "Colours.h"
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;
	public:
		Point();
		Point(const Point &copy);
		Point(float const x, float const y);
		Point &operator=(Point &copy);
		~Point();
	public:
		Fixed	getX() const;
		Fixed	getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif