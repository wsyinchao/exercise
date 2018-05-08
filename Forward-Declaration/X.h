#pragma once

class Y;

class X
{
	//生命 Y 类是自己的友元类
	friend class Y;

public:
	X();
	~X();

private:
	Y * m_py;
	int m_count = 0;
};

