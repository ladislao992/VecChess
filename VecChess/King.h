#pragma once
#include "Figure.h"
/*class King  // ����������� �� Figure
{
	bool CanMoveToPosition(xPos, yPos) - ���������� true ���� ������ ������ ��� �������
};*/

class King : public Figure
{
public:
	King(int xPos, int yPos, Clr clr);
	bool CanMoveToPosition(int xPos, int yPos) override;
	bool SetCurrentCoordinates(int xPos, int yPos) override;
private:

};

