#include "King.h"


King::King(int xPos, int yPos, Clr clr) :
	Figure(xPos, yPos, clr)
{

}

bool King::SetCurrentCoordinates(int& xPos, int& yPos)
{
	
		bool response = false;
		if (CanMoveToPosition(xPos, yPos))
		{
			King::Figure::SetX(xPos);
			King::Figure::SetY(yPos);
			response = true;
		}
		return response;
	}

bool King::CanMoveToPosition(int& xPos, int& yPos)
{
	bool response = false;
	int resX = abs(xPos - GetX());
	int resY = abs(yPos - GetY());
	if (resX == 1 && resY == 0 || resX == 0 && resY == 1 ||
		resX == 1 && resY == 1)
	{

		response = true;

	}

		return response;

}