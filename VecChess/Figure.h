#pragma once
#include<iostream>
/*class Figure
{	Figure(xPos, yPos) - устанавливает фигуру в начальное положение
		Color GetColor()  // Black и White
		GetFigureId() - у каждой фигуры есть идентификатор, тип не важен, главное чтобы он
		был уникальным
		SetCurrentCoordinates(xPos, yPos)
};*/
enum Clr {
	ClrError,
	ClrWhite,
	ClrBlack
};

enum xPos {
	xPosError, A, B, C, D, E, F, G, H
};

class Figure {
public:
	struct CurFigure {
		int xPos;
		int yPos;
		int id;
		Clr color;
	};
	Figure(int xPos, int yPos, Clr clr);
	Clr GetColor()const;
	virtual bool CanMoveToPosition(int& xPos, int& yPos) = 0;
	int GetFigureId() const;
	virtual bool SetCurrentCoordinates(int& xPos, int& yPos);
	//virtual bool MoveToPosition(int xPos, int yPos)=0;

//protected:
	int GetX()const;
	int GetY()const;
	void SetX(int x);
	void SetY(int y);

private:

	CurFigure m_element;


};

inline int Figure::GetX()const { return m_element.xPos; }
inline int Figure::GetY()const { return m_element.yPos; }
inline void Figure::SetX(int x) { m_element.xPos = x; }
inline void Figure::SetY(int y) { m_element.yPos = y; }
