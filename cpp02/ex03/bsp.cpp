#include "Point.hpp"

void	printMsg(std::string stringy, std::string colour)
{
	std::cout << std::endl << colour << "+" << std::string(49, '=') << "+" << RESET_LINE;
	std::cout << RESET << (stringy.size() > 16 ? "	" : "		");
	std::cout<< "..." << stringy << "..." << RESET_LINE;
	std::cout << colour << "+" << std::string(49, '=') << "+" << std::endl << RESET_LINE;
}

Fixed	getArea(Point a, Point b, Point c)
{
	Fixed	area;

	// area = (a.getX()*(b.getY() - c.getY())) + (b.getX()*(c.getY() - a.getY())) + (c.getX()*(a.getY() - c.getY()));
	area = ((a.getX() - c.getX()) * (b.getY() - c.getY())) - ((b.getX() - c.getX()) * (a.getY() - c.getY()));
	area = area / Fixed(2);
	if (area < 0)
		area = area * Fixed(-1);
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	abcArea = getArea(a, b, c);
	Fixed	ersteArea = getArea(point, b, c);
	Fixed	zweiteArea = getArea(a, point, c);
	Fixed	dritteArea = getArea(a, b, point);

	if (ersteArea + zweiteArea + dritteArea > abcArea)
	{
		printMsg("The point is outside of the triangle", PURPLE);
		return (false);
	}
	else
	{
		printMsg("The point is inside of the triangle", GREEN);
		return (true);
	}
}