#include "ChessField.h"


ChessField::ChessField()
//Hard the stock figure positions
{
	FigureKit.push_back(new Horse(B, 1, ClrWhite));
	FigureKit.push_back(new King(E, 1, ClrWhite));
	FigureKit.push_back(new Horse(G, 8, ClrBlack));
	FigureKit.push_back(new King(E, 8, ClrBlack));
}
bool ChessField::CheckPos(int xPos, int yPos)const {
	bool response = true;
	for (int i = FigureKit.size(); i > 0; --i) {
		if (FigureKit[i - 1]->GetX() == xPos && FigureKit[i - 1]->GetY() == yPos) {
			response = false;
		}
	}return response;
}

bool ChessField::Step()
{
	int moveId;
	char xPosToMoveCh;
	int xPosToMove;
	int yPosToMove;
	int MaxPosVal = 8; //hard the max desk coordinztes.
	std::cout << "Enter 'Figure id':\n 1.(H1)White Horse\n 2.(K1)White King\n 3.(H2)Black Horse \n 4.(B2)Bkack King \n And after enter new pos with space beetwen\n";

	std::cin >> moveId >> xPosToMoveCh >> yPosToMove;
	
	if (xPosToMoveCh == 'A') {
		xPosToMove = 1;
	}
	else
	if (xPosToMoveCh == 'B') {
		xPosToMove = 2;
	}
	else
	if (xPosToMoveCh == 'C') {
		xPosToMove = 3;
	}
	else
	if (xPosToMoveCh == 'D') {
		xPosToMove = 4;
	}else
	if (xPosToMoveCh == 'E') {
		xPosToMove = 5;
	}else
	if (xPosToMoveCh == 'F') {
		xPosToMove = 6;
	}else
	if (xPosToMoveCh == 'G') {
		xPosToMove = 7;
	}else
	if (xPosToMoveCh == 'H') {
		xPosToMove = 8;
	}

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

	if (xPosToMove > MaxPosVal || yPosToMove > MaxPosVal)
	{
		std::cout << "Desk have 8*8 coordinates max.";
		return false;
	}
	else {
		return Move(FigureKit[moveId], xPosToMove, yPosToMove);
	}

}

bool ChessField::Move(Figure* fig, int& xPos, int& yPos)
{

	return fig->SetCurrentCoordinates(xPos, yPos);
}
void ChessField::ShowBoard()
{
	for (int x = 9; x > 0; --x) {
		std::cout << std::endl;
		for (int y = 0; y < 9; ++y) {

			std::cout << "      |";
		}
		std::cout << std::endl;
		for (int y = 0; y < 9; ++y) {
			if (y == 1 && x == 9) {
				std::cout << "   A  |";
			}
			else
				if (y == 2 && x == 9) {
					std::cout << "   B  |";
				}
				else
					if (y == 3 && x == 9) {
						std::cout << "   C  |";
					}
					else
						if (y == 4 && x == 9) {
							std::cout << "   D  |";
						}
						else
							if (y == 5 && x == 9) {
								std::cout << "   E  |";
							}
							else
								if (y == 6 && x == 9) {
									std::cout << "   F  |";
								}
								else
									if (y == 7 && x == 9) {
										std::cout << "   G  |";
									}
									else
										if (y == 8 && x == 9) {
											std::cout << "   H  |";
										}
										else
											if (y == FigureKit[1]->GetX() && x == FigureKit[1]->GetY()) {
												std::cout << "  K1  |";
											}
											else
												if (y == FigureKit[0]->GetX() && x == FigureKit[0]->GetY()) {
													std::cout << "  H1  |";
												}
												else
													if (y == FigureKit[3]->GetX() && x == FigureKit[3]->GetY() && x == 8) {
														std::cout << "  K2  |";
													}
													else
														if (y == FigureKit[2]->GetX() && x == FigureKit[2]->GetY()) {
															std::cout << "  H2  |";
														}
														else

															if (y == 0) {
																if (x == 9) {
																	std::cout << "  Pos |";
																}
																else {
																	std::cout << "   " << x << "  |";
																}
															}
															else
																std::cout << "      |";
		}
		std::cout << std::endl;
		for (int y = 0; y < 9; ++y) {
			std::cout << "______|";



		}

	}std::cout << "\n";
}


ChessField::~ChessField()
{
	unsigned int length = FigureKit.size();
	for (int i = 0; i < length; ++i)
	{
		delete FigureKit[i];
	}
	/*for (auto el: nabor)
	{
		delete el;
	}*/
}