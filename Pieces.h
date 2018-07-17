#pragma once
class Pieces
{
public:
	int GetBlockType(int pPiece, int pRotation, int pX, int pY);
	int GetXInitalPosition(int pPiece, int pRotation);
	int GetYInitalPosition(int pPiece, int pRotation);
};

