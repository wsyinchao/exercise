#ifndef _SCREEN_H_
#define _SCREEN_H_

#include <string>

class Screen
{
public:
	using pos = std::size_t;

public:
	Screen() = default;
	Screen(pos wid, pos hei) : width(wid), height(hei), content(wid * hei, ' ') {}
	Screen(pos wid, pos hei, char ch) : width(wid), height(hei) { content += ch; }

	//
	char get() const {
		return content[cur];
	}

	char get(pos row, pos lin) const;

	//member data
private:
	pos width = 0, height = 0;
	pos cur = 0;
	std::string content;
};

#endif // !_SCREEN_H_
