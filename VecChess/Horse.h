#pragma once
#include "Figure.h"
/*class Horse  // наследуется от Figure
{
	bool CanMoveToPosition(xPos, yPos) - возвращает true если фигура смогла так перейти
};
*/
class Horse : public Figure
{
public:
	Horse(int xPos, int yPos, Clr clr);
	bool CanMoveToPosition(int xPos, int yPos);
	bool SetCurrentCoordinates(int xPos, int yPos) override;
private:

};
