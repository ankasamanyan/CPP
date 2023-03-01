#include "Point.hpp"

Point::Point():_x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(const Point &copy):_x(copy._x), _y(copy._y)
{
}

Point::Point(float const x, float const y):_x(Fixed(x)), _y(Fixed(y))
{
}

Point &Point::operator=(Point &copy)
{
	return (copy);
}

Point::~Point()
{
}

Fixed	Point::getX() const
{
	return (_x);
}

Fixed	Point::getY() const
{
	return (_y);
}
