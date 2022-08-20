#include "ChessField.h"


ChessField::ChessField()
//Hard the stock figure positions
{
	FigureKit.push_back(new Horse(B, 1, ClrWhite));
	FigureKit.push_back(new King(D, 1, ClrWhite));
	FigureKit.push_back(new Horse(G, 8, ClrBlack));
	FigureKit.push_back(new King(D, 8, ClrBlack));
}
bool ChessField::CheckPos(int xPos, int yPos)const {
	bool response = true;
	for (int i = FigureKit.size(); i > 0; --i) {
		if (FigureKit[i-1]->GetX() == xPos && FigureKit[i-1]->GetY() == yPos) {
			response = false;
		}
	}return response;
}

bool ChessField::Step()
{
	int moveId;
	int xPosToMove;
	int yPosToMove;
	int MaxPosVal = 8; //hard the max desk coordinztes.
	std::cout << "Enter 'Figure id':\n 1. White Horse\n 2. White King\n 3. Black Horse \n 4. Bkack King \n And after enter new pos with space beetwen\n";

	std::cin >> moveId >> xPosToMove >> yPosToMove;
	if (moveId > FigureKit.size())
	{
		std::cout << "Enter correct figure id!\n";
		return false;
	}
	else
	--moveId;
	bool check = ChessField::CheckPos(xPosToMove, yPosToMove);
	if (!check) {
		std::cout << "Stand any figure in this coordinates, try again\n";
		return check;
	}

	if (xPosToMove >MaxPosVal || yPosToMove> MaxPosVal)
	{
		std::cout  << "Desk have 8*8 coordinates max.";
		return false;
	}	
	else {
		return Move(FigureKit[moveId], xPosToMove, yPosToMove);
	}
	
}

	bool ChessField::Move(Figure * fig, int& xPos, int& yPos)
{

	return fig->SetCurrentCoordinates(xPos, yPos);
}

ChessField::~ChessField()
{
	int length = FigureKit.size();
	for (int i = 0; i < length; ++i)
	{
		delete FigureKit[i];
	}
	/*for (auto el: nabor)
	{
		delete el;
	}*/
}