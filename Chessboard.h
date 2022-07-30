/*
Martin Dorobczynski
CSIS 297

Knights Tour Project

chessboard.H

file contains class definitions & functions
*/
#ifndef Chessboard_h
#define Chessboard_h

//Board class
class Chessboard
{
    //PUBLIC MEMBERS
public:

    static const int MOVES = 8;  //initalizes possible moves
    int offsets[MOVES][2]; //array for offset values
    int moves[MOVES];      //record legal moves

    //Overloaded constructor
    Chessboard(int x, int y);

    /*
     //destructor
     ~Chessboard();
    */

    //member functions
    int legalMove(int x, int y);
    int getLegalMoves();                //retrieves the legal moves
    int getCountLegalMoves();           //retrieves count of legal moves
    void setLegalMovesCount(int x);     //sets the legal move count

    void Movement(int iRow, int iCol);
    //void Movement(int iRow = 0, int iCol = 0);

    //PRIVATE MEMBERS
private:

    //member variables
    static const int iROW = 8;  //initalizes board width
    static const int iCOL = 8;  //initalizes board height
    int iRow;
    int iCol;
    int legalMovesCount;
    int countLegalMoves;    //count legal moves
    int board[iROW][iCOL];  //the playing board
};
#endif /* Chessboard_h */