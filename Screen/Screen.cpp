#include "Screen.h"

inline
char Screen::get(pos row, pos lin) const
{
	pos cursor = width * (row - 1);
	cursor += lin;

	return content[cursor];
}