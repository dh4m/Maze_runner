#pragma once

#ifndef QUEUE_HPP
# define QUEUE_HPP

#include "Maze.hpp"

class Queue
{
public:
	Queue(void);
	~Queue(void);

	void	Push(int i, int j, int t);
	Coordi	Pop(void);
	void	trace_path(Coordi *path, int &path_len);
	bool	empty(void);
private:
	Coordi	_queue[MAX_LEN * MAX_LEN];
	int		_head;
	int		_tail;

	Queue(const Queue &copy);
	Queue	&operator=(const Queue &copy);
};

#endif
