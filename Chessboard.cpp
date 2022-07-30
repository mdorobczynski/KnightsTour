/*
Martin Dorobczynski
CSIS 297

Knights Tour Project

chessboard.CPP

file contains the implementation of the header class
*/
#include "Chessboard.h"       //include header file

//****************************************************************
//  The constructor utilizes the private member variables        *                                                   
//****************************************************************
Chessboard::Chessboard(int x, int y)
{
    iRow = x;
    iCol = y;
}

//*****************************************************************
//  le returns the private member variable shipLength             *                                                               
//*****************************************************************
int Chessboard::legalMove(int x, int y)
{
    if ((0 <= x && x <= 7) && (0 <= y && y <= 7))
        return 1;
    return 0;
}

//*****************************************************************************
//  getLegalMoves returns the number of legal moves avaliable for the knight  *                                                               
//*****************************************************************************
int Chessboard::getLegalMoves()
{
    int iCount = 0;     //initalizes starting count to 0
    int moveNum = 0;    //initalizes starting moves to 0
    int iX = iRow;      //sets row equal to x-axis
    int iY = iCol;      //sets column equal to y-axis

    iX = iRow + 2;      //initalizing x & row for one of the 8 possible moves
    iY = iCol + 1;      //initalizing y and column for one of the 8 possible moves
    offsets[iCount][0] = iX;    //
    offsets[iCount][1] = iY;
    if (legalMove(iX, iY)) moves[moveNum++] = iCount + 1;
    iCount++;       //increment variable iCount


    iX = iRow + 2;
    iY = iCol - 1;
    offsets[iCount][0] = iX;
    offsets[iCount][1] = iY;
    if (legalMove(iX, iY)) moves[moveNum++] = iCount + 1;
    iCount++;

    iX = iRow + 1;
    iY = iCol + 2;
    offsets[iCount][0] = iX;
    offsets[iCount][1] = iY;
    if (legalMove(iX, iY)) moves[moveNum++] = iCount + 1;
    iCount++;

    iX = iRow + 1;
    iY = iCol - 2;
    offsets[iCount][0] = iX;
    offsets[iCount][1] = iY;
    if (legalMove(iX, iY)) moves[moveNum++] = iCount + 1;
    iCount++;

    iX = iRow - 2;
    iY = iCol + 1;
    offsets[iCount][0] = iX;
    offsets[iCount][1] = iY;
    if (legalMove(iX, iY)) moves[moveNum++] = iCount + 1;
    iCount++;

    iX = iRow - 2;
    iY = iCol - 1;
    offsets[iCount][0] = iX;
    offsets[iCount][1] = iY;
    if (legalMove(iY, iX)) moves[moveNum++] = iCount + 1;
    iCount++;

    iX = iRow - 1;
    iY = iCol + 2;
    offsets[iCount][0] = iX;
    offsets[iCount][1] = iY;
    if (legalMove(iX, iY)) moves[moveNum++] = iCount + 1;
    iCount++;


    iX = iRow - 1;
    iY = iCol - 2;
    offsets[iCount][0] = iX;
    offsets[iCount][1] = iY;
    if (legalMove(iX, iY)) moves[moveNum++] = iCount + 1;
    iCount++;

    countLegalMoves = moveNum;  //Number of moves now equals variable countLegalMoves
    return moveNum;             //Number of moves value is returned
}

//*****************************************************************
//  getCountLegalMoves returns the private member variable shipLength  *                                                               
//*****************************************************************
int Chessboard::getCountLegalMoves()
{
    return countLegalMoves;
}


void Chessboard::setLegalMovesCount(int x)
{
    countLegalMoves = x;
}

void Chessboard::Movement(int iRow = 0, int iCol = 0)
{
    //might not be needed
}
