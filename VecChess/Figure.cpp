#include "Figure.h"

int numToId = 0;
Figure::Figure(int xPos, int yPos, Clr clr)
{
	m_element.xPos = xPos;
	m_element.yPos = yPos;
	m_element.color = clr;
	m_element.id = ++numToId;

}
Clr Figure::GetColor()const
{
	return m_element.color;
}
int Figure::GetFigureId() const {

	return m_element.id;
}
bool Figure::SetCurrentCoordinates(int xPos, int yPos)
{
	return false;
}
void SetCurrentCoordinates(int xPos, int yPos) {


}
