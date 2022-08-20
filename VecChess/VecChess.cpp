#include <iostream>
#include "Figure.h"
#include "King.h"
#include "Horse.h"
#include "ChessField.h"

/*bool CanMoveThere(Figure* fig, int xPos, int yPos) {
	return fig->CanMoveToPosition(xPos, yPos);
}*/

int main()
{
	ChessField Desk;
	Desk.ShowBoard();
	while (true) {
		if (Desk.Step()) {
			Desk.ShowBoard();
			
		}
		else {
			std::cout << "Falce move" << std::endl;
		}
	}
}
	