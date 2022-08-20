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


