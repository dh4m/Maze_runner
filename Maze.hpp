#pragma once

#ifndef MAZE_HPP
# define MAZE_HPP

# define NUM_DIR 24

struct Space
{
	unsigned char w : 1;
	unsigned char s : 1;
	unsigned char a : 1;
	unsigned char d : 1;
	unsigned char visit : 1;
	unsigned char search_visit : 1;
};

enum e_dir
{
	W = 1,
	S = 2,
	A = 3,
	D = 4
};

enum e_algo
{
	DFS,
	DFS_ANIME,
	BFS,
	BFS_ANIME
};

class Maze
{
public:
	Maze(void);
	~Maze(void);

	void	Maze_generate(int width, int height, bool anime);
	void	Maze_search(int algo, int s_i, int s_j, int d_i, int d_j);
private:
	void	Maze_bfs_search(bool anime, int s_i, int s_j, int d_i, int d_j);
	void	Maze_dfs_search(bool anime, int s_i, int s_j, int d_i, int d_j);
	void	Maze_gen_DFS(int i, int j, bool anime);
	void	Maze_search_DFS(int i, int j, bool anime);

	Space	_maze[30][30];
	int		_width;
	int		_height;
	bool	_gen_anime;
	bool	_search_anime;

	static const int _dir[24][4];

	Maze	&operator=(const Maze &copy);
	Maze(const Maze &copy);
	// friend mfc
};

#endif
