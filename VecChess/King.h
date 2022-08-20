#pragma once
#include "Figure.h"
/*class King  // наследуется от Figure
{
	bool CanMoveToPosition(xPos, yPos) - возвращает true если фигура смогла так перейти
};*/

class King : public Figure
{
public:
	King(int xPos, int yPos, Clr clr);
	bool CanMoveToPosition(int xPos, int yPos) override;
	bool SetCurrentCoordinates(int xPos, int yPos) override;
private:

};

