#pragma once

#include <string>

class Unit {
public:
	unsigned health;
	unsigned damage;
	double accuracy;
	std::string type;
};

//Лучник
class Bowman : public Unit {
public:
	Bowman();
};

//Пехотинец
class Footman : public Unit {
public:
	Footman();
};

//Наездник
class Horseman : public Unit {
public:
	Horseman();
};
