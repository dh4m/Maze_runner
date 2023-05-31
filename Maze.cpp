#include "Maze.hpp"
#include <cstdlib>
#include <ctime>

const int Maze::_dir[NUM_DIR][4] = {
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
:_maze(), _width(0), _height(0), _gen_anime(false), _search_anime(false)
{}

Maze::~Maze(void)
{}

// 미로 생성
void	Maze::Maze_generate(int width, int height, bool anime)
{
	_width = width;
	_height = height;
	_gen_anime = anime;

	srand(time(NULL));
	//TODO: visit set
	int start_i = rand() % width;
	int start_j = rand() % height;
	Maze_gen_DFS(start_i, start_j, anime);
	//TODO: visit reset
	//TODO: rerendering
}

void	Maze::Maze_gen_DFS(int i, int j, bool anime)
{
	_maze[i][j].visit = 1;
	/*
	if (anime)
	{
		rerendering//
	}
	*/

	int dir = rand() % NUM_DIR;
	for (int idx = 0; idx < 4; idx++)
	{
		switch (_dir[dir][idx])
		{
		case W:
			if (j == 0 || _maze[i][j - 1].visit)
				break;
			_maze[i][j].w = 1;
			_maze[i][j - 1].s = 1;
			Maze_gen_DFS(i, j - 1, anime);
			break;
		case S:
			if (j == _height - 1 || _maze[i][j + 1].visit)
				break;
			_maze[i][j].s = 1;
			_maze[i][j + 1].w = 1;
			Maze_gen_DFS(i, j + 1, anime);
			break;
		case A:
			if (i == 0 || _maze[i - 1][j].visit)
				break;
			_maze[i][j].a = 1;
			_maze[i - 1][j].d = 1;
			Maze_gen_DFS(i - 1, j, anime);
			break;
		case D:
			if (i == _width - 1 || _maze[i + 1][j].visit)
				break;
			_maze[i][j].d = 1;
			_maze[i + 1][j].a = 1;
			Maze_gen_DFS(i + 1, j, anime);
			break;
		}
	}
}

// 미로 탐색
void	Maze::Maze_search(int algo, int s_i, int s_j, int d_i, int d_j)
{
	switch (algo)
	{
	case DFS:
		Maze_dfs_search(false, s_i, s_j, d_i, d_j);
		break;
	case DFS_ANIME:
		Maze_dfs_search(true, s_i, s_j, d_i, d_j);
		break;
	case BFS:
		Maze_bfs_search(false, s_i, s_j, d_i, d_j);
		break;
	case BFS_ANIME:
		Maze_bfs_search(true, s_i, s_j, d_i, d_j);
		break;
	default:
		break;
	}
}

void	Maze::Maze_bfs_search(bool anime, int s_i, int s_j, int d_i, int d_j)
{
	// 보류
}

void	Maze::Maze_dfs_search(bool anime, int s_i, int s_j, int d_i, int d_j)
{
	
}

void	Maze::Maze_search_DFS(int i, int j, bool anime)
{
	
}