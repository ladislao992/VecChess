#include "ChessField.h"


ChessField::ChessField()
//Hard the stock figure positions
{
	nabor.push_back(new Horse(B, 1, ClrWhite));
	nabor.push_back(new King(D, 1, ClrWhite));
	nabor.push_back(new Horse(G, 8, ClrBlack));
	nabor.push_back(new King(D, 8, ClrBlack));
}

bool ChessField::Step()
{
	int moveId;
	int xPosToMove;
	int yPosToMove;

	std::cout << "Enter 'Figure id' and after enter new pos with space beetwen\n";

	std::cin >> moveId;

	std::cin >> xPosToMove >> yPosToMove;

	return Move(nabor[moveId], xPosToMove, yPosToMove);

}

bool ChessField::Move(Figure* fig, int xPos, int yPos)
{

	return fig->SetCurrentCoordinates(xPos, yPos);
}

ChessField::~ChessField()
{
	int length = nabor.size();
	for (int i = 0; i < length; ++i)
	{
		delete nabor[i];
	}
	/*for (auto el: nabor)
	{
		delete el;
	}*/
}