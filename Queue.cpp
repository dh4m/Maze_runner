#include "Queue.hpp"

Queue::Queue(void)
: _queue(), _head(0), _tail(0) 
{}

Queue::~Queue(void)
{}

void	Queue::Push(int i, int j, int t)
{
	_queue[_tail++] = Coordi(i, j, t);
}

Coordi	Queue::Pop(void)
{
	return (_queue[_head++]);
}

void	Queue::trace_path(Coordi *path, int &path_len)
{
	Coordi curr = _queue[_head - 1];
	path_len = 0;
	path[path_len++] = curr;

	while (curr.trace != -1)
	{
		curr = _queue[curr.trace];
		path[path_len++] = curr;
	}
}

bool	Queue::empty(void)
{
	return (_head == _tail);
}

