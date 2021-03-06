#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace Constants 
{
	const int FIELD_SIZE = 10;
	const int BATTLE_FIELD_WIGHT = 12;
	const int BATTLE_FIELD_HEIGHT = 12;
	const int FIRST_FIELD_COORD = 3;
	const int SECOND_FIELD_COORD = 18;
	const int SHIP_ORIENT = 2;

	enum CellType
	{
		CELL_TYPE_EMPTY = 0,
		CELL_TYPE_WALL,
		CELL_TYPE_SHOOTED,
		CELL_TYPE_MISSED,
		CELL_TYPE_SHIP
	};

	enum ShipID
	{
		SHIP_ID_ONE_DECK = 1,
		SHIP_ID_TWO_DECK,
		SHIP_ID_THREE_DECK,
		SHIP_ID_FOUR_DECK
	};

	enum ShipOrientation
	{
		SHIP_ORIENTATION_HORIZONTAL = 0,
		SHIP_ORIENTATION_VERTICAL
	};
}
#endif CONSTANTS_H