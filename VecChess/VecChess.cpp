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

	while (true) {
		if (Desk.Step())
			std::cout << "Success" << std::endl;
		else {
			std::cout << "Falce move" << std::endl;
		}
	}

	std::cout << "you lame, man";

}
