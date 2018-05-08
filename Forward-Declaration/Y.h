#pragma once

#include "X.h"

class Y
{
public:
	Y();
	~Y();

	//
	void test()
	{
		m_x.m_count = 1;
	}

private:
	X m_x;
};

