#pragma once

class Y;

class X
{
	//���� Y �����Լ�����Ԫ��
	friend class Y;

public:
	X();
	~X();

private:
	Y * m_py;
	int m_count = 0;
};

