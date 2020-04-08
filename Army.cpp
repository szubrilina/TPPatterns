#include "Army.h"
#include "Constants.h"

Horseman* FranceArmy::makeHorseman() {
	Horseman newSolder;
	newSolder.type = HORSEMAN_TYPE;
	return &newSolder;
}

Bowman* FranceArmy::makeBowman() {
	Bowman newSolder;
	newSolder.type = BOWMAN_TYPE;
	return &newSolder;
}

Footman* FranceArmy::makeFootman() {
	Footman newSolder;
	newSolder.type = FOOTMAN_TYPE;
	return &newSolder;
}

Horseman* EnglandArmy::makeHorseman() {
	Horseman newSolder;
	newSolder.type = HORSEMAN_TYPE;
	return &newSolder;
}

Bowman* EnglandArmy::makeBowman() {
	Bowman newSolder;
	newSolder.type = BOWMAN_TYPE;
	return &newSolder;
}

Footman* EnglandArmy::makeFootman() {
	Footman newSolder;
	newSolder.type = FOOTMAN_TYPE;
	return &newSolder;
}