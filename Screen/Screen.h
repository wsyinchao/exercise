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
	char get() const { return content[cur]; }

	char get(pos row, pos lin) const;

	//set function
	Screen& set(char);
	Screen& set(pos, pos, char);

	//
	Screen& display(std::ostream& os) 
	{ this->do_display(os); return *this; }

	const Screen& display(std::ostream& os) const 
	{ this->do_display(os); return *this; }

	//move
	Screen& move(pos wid, pos hei)
	{
		this->width = wid;
		this->height = hei;

		return *this;
	}

private:
	void do_display(std::ostream& os) const 
	{ os << content; }

	//member data
private:
	pos width = 0, height = 0;
	pos cur = 0;
	std::string content;
};

#endif // !_SCREEN_H_
