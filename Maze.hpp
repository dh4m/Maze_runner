#pragma once

#ifndef MAZE_HPP
# define MAZE_HPP

#include "Space.hpp"

class Maze
{
public:
	Maze(void);
	Maze(const Maze &copy);
	~Maze(void);

	Maze	&operator=(const Maze &copy);
	void	Maze_generate(int width, int height);
	void	Maze_bfs_search(int x, int y);
	void	Maze_dfs_search(int x, int y);
private:
	void	Maze_gen_DFS();
	void	Maze_search_DFS();

	Space _maze[30][30];
	bool _search_visit[30][30];
	int _width;
	int _height;

	static const int dir[24][4];
};

#endif
