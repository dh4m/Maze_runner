#pragma once

#ifndef SPACE_HPP
# define SPACE_HPP

enum e_dir
{
	W,
	S,
	A,
	D
};

class Space
{
public:
	Space(void);
	Space(const Space &copy);
	~Space(void);

	Space	&operator=(const Space &copy);
	bool	isWallExist(int dir);
	void	break_wall(int dir);
	bool	isVisit(void);
private:
	bool _visit;
	unsigned char _wall;
};

#endif
