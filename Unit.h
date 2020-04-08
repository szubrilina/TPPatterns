#pragma once

#include <string>

class Unit {
public:
	unsigned health;
	unsigned damage;
	double accuracy;
	std::string type;
};

//������
class Bowman : public Unit {
public:
	Bowman();
};

//���������
class Footman : public Unit {
public:
	Footman();
};

//��������
class Horseman : public Unit {
public:
	Horseman();
};
