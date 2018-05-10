#include "Screen.h"
using namespace std;

Screen::Screen(std::istream & is = cin)
{
}

//Screen::Screen(istream & is = cin, string & str)
//{
//
//}

inline
char Screen::get(pos row, pos lin) const
{
	pos cursor = width * (row - 1);
	cursor += lin;

	return content[cursor];
}

inline
Screen& Screen::set(char ch)
{
	this->content[this->cur] = ch;

	return *this;
}

inline
Screen& Screen::set(pos wid, pos hei, char ch)
{
	this->content[wid*width + hei] = ch;

	return *this;
}

inline
Screen::pos Screen::size() const
{

}