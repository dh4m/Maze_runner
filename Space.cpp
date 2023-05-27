#include "Space.hpp"

Space::Space(void)
: _visit(false), _wall(0b1111)
{

}

Space::Space(const Space &copy)
{

}

Space::~Space(void)
{

}

Space	&Space::operator=(const Space &copy)
{

	return (*this);
}

bool	Space::isWallExist(int dir)
{
	unsigned char mask = 1;

	return (_wall & (mask << dir));
}

void	Space::break_wall(int dir)
{
	unsigned char mask = 1;

	_wall &= ~(mask << dir);
}

bool	Space::isVisit(void)
{
	return (_visit);
}

