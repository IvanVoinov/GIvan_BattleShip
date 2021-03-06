#ifndef ONE_DECK_SHIP_H
#define ONE_DECK_SHIP_H

#include "Ship.h"

class OneDeckShip : public Ship
{
public:
	virtual int getSumShipDecks() const;
private:
	int sumShipDecks_ = 1;
};

#endif ONE_DECK_SHIP_H