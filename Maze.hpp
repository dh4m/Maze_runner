#pragma once

#ifndef MAZE_HPP
# define MAZE_HPP

# define NUM_DIR 24
# define MAX_LEN 30

struct Coordi
{
	Coordi() : i(0), j(0) {}
	Coordi(int _i, int _j) : i(_i), j(_j) {}
	Coordi(int _i, int _j, int _t) : i(_i), j(_j), trace(_t) {}
	int i;
	int j;
	int trace;
};

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
	void	Maze_gen_DFS(int i, int j, bool anime);

	void	Maze_bfs_search(bool anime, int s_i, int s_j, int d_i, int d_j);
	int		Maze_dfs_search(bool anime, int s_i, int s_j, int d_i, int d_j);

	Space	_maze[MAX_LEN][MAX_LEN];
	int		_width;
	int		_height;
	bool	_gen_anime;
	bool	_search_anime;

	Coordi	_path[MAX_LEN * MAX_LEN];
	int		_path_len;

	static const int _dir[NUM_DIR][4];

	// friend mfc

	// copy forbidden
	Maze	&operator=(const Maze &copy);
	Maze(const Maze &copy);
};

#endif
