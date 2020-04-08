#pragma once

#include "Unit.h"

class AbstractArmy {

	AbstractArmy();

	virtual Unit* makeHorseman() = 0;
	virtual Unit* makeBowman() = 0;
	virtual Unit* makeFootman() = 0;
};

class FranceArmy : AbstractArmy {
	Horseman* makeHorseman();
	Bowman* makeBowman();
	Footman* makeFootman();
};

class EnglandArmy : AbstractArmy {
	Horseman* makeHorseman();
	Bowman* makeBowman();
	Footman* makeFootman();
};