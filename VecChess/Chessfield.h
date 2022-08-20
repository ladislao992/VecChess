#pragma once
#include<iostream>
#include "Figure.h"
#include "King.h"
#include "Horse.h"
#include <vector>
/*class СhessField {
  СhessField() - расставляет фигуры в начальные позиции позиции
  "4 раза передать в конструктор фигуры позиции и колер"
  bool Step(figureId, xPos, yPos) - делает шаг фигурой на определенную позицию.
  если фигура смогла так перейти - возвращает true иначе не перемещает и возвращает false
  "Обращается к классу и принимает тру или фолс"
  ShowBoard() - выводит на экран доску с фигурами
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


