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

	figureId1.xPos = 1;
	figureId1.xPos = B;
	figureId1.color = ClrWhite;

	figureId2.xPos = 1;
	figureId2.xPos = D;
	figureId2.color = ClrWhite;

	figureId3.xPos = 8;
	figureId3.xPos = G;
	figureId1.color = ClrBlack;

	figureId4.xPos = 8;
	figureId4.xPos = D;
	figureId1.color = ClrBlack;*/

class ChessField
{
public:

	ChessField();
	~ChessField();
	//void SetMovePos();
	bool Move(Figure*, int xPos, int yPos);
	//int GetId();

	bool Step();
private:
	std::vector<Figure*> nabor;
};


