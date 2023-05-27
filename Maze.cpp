#include "Maze.hpp"

const int Maze::dir[24][4] = {
	{1, 2, 3, 4}, {1, 2, 4, 3}, {1, 3, 2, 4}, 
	{1, 3, 4, 2}, {1, 4, 2, 3}, {1, 4, 3, 2}, 
	{2, 1, 4, 3}, {2, 1, 3, 4}, {2, 3, 4, 1}, 
	{2, 3, 1, 4}, {2, 4, 3, 1}, {2, 4, 1, 3}, 
	{3, 1, 2, 4}, {3, 1, 4, 2}, {3, 2, 1, 4}, 
	{3, 2, 4, 1}, {3, 4, 1, 2}, {3, 4, 2, 1}, 
	{4, 1, 3, 2}, {4, 1, 2, 3}, {4, 2, 3, 1}, 
	{4, 2, 1, 3}, {4, 3, 2, 1}, {4, 3, 1, 2} 
};

Maze::Maze(void)
{

}

Maze::Maze(const Maze &copy)
{

}

Maze::~Maze(void)
{

}

Maze	&Maze::operator=(const Maze &copy)
{

	return (*this);
}

void	Maze::Maze_generate(int width, int height)
{

}

void	Maze::Maze_bfs_search(int x, int y)
{
	
}

void	Maze::Maze_gen_DFS()
{

}

void	Maze::Maze_search_DFS()
{
	
}