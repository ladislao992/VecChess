#pragma once
#include "Figure.h"
/*class Horse  // ����������� �� Figure
{
	bool CanMoveToPosition(xPos, yPos) - ���������� true ���� ������ ������ ��� �������
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
