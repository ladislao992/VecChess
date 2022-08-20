#include "Horse.h"


Horse::Horse(int xPos, int yPos, Clr clr) :
	Figure(xPos, yPos, clr)
{

}



bool Horse::SetCurrentCoordinates(int& xPos, int& yPos)
{		
		bool response = false;
		if (CanMoveToPosition(xPos, yPos))
		{
			Horse::Figure::SetX(xPos);
			Horse::Figure::SetY(yPos);
			response = true;
		}
		return response;
	}

bool Horse::CanMoveToPosition(int& xPos, int& yPos) {
	bool response = false;
	int resX = abs(xPos - GetX());
	int resY = abs(yPos - GetY());
	if (resX == 2 && resY == 1 || resX == 1 && resY == 2) {

		response = true;

	}
	return response;

}