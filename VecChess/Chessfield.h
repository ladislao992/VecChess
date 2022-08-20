#pragma once
#include<iostream>
#include "Figure.h"
#include "King.h"
#include "Horse.h"
#include <vector>
/*class �hessField {
  �hessField() - ����������� ������ � ��������� ������� �������
  "4 ���� �������� � ����������� ������ ������� � �����"
  bool Step(figureId, xPos, yPos) - ������ ��� ������� �� ������������ �������.
  ���� ������ ������ ��� ������� - ���������� true ����� �� ���������� � ���������� false
  "���������� � ������ � ��������� ��� ��� ����"
  ShowBoard() - ������� �� ����� ����� � ��������
};"
*/
class ChessField
{
public:

	ChessField();
	~ChessField();
	//void SetMovePos();
	bool Move(Figure*, int& xPos, int& yPos);
	bool CheckPos(int xPos, int yPos)const;
	//int GetId();

	bool Step();
private:
	std::vector<Figure*> FigureKit;
	
	
};


