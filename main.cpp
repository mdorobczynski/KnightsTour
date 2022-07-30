/*
Martin Dorobczynski
CSIS 297
Knights Tour project

- ask user for starting position
- places the night at starting position
    a) calculates all legal moves
    b) each move will be numbered
- user will choose a number and knight will move to space
    a) recalculate number of legal moves

Each move will give user the option to either start a new game or exit the program
Program ends when user wishes

main.CPP
 */
#include <iostream>       //allows reading/writing to standard input/output stream
#include "Chessboard.h" //include header file
using namespace std;

//return type returned is Chessboard
Chessboard Choices(int x, int y)
{

    //initalizing char variables
    char choice1;
    char choice2;

    //declare an object of class Chessboard
    Chessboard board(x, y);

    //access attributes
    board.getLegalMoves();
    board.getCountLegalMoves();

    //cout for the number of legal moves for instance "board"
    cout << "The number of legal moves is: " << board.getCountLegalMoves() << endl;
    ;
    cout << endl;

    //for loop
    //cout move location
    for (int i = 0; i < 8; i++)
    {
        cout << (i + 1) << ": " << board.offsets[i][0] << "," << board.offsets[i][1] << endl;
    }
    cout << endl;

    //for loop
    //cout the legal move number
    for (int i = 0; i < board.getCountLegalMoves(); i++)
    {
        cout << "The legal move number is: " << board.moves[i] + 1 << endl;
    }
    cout << endl
        << endl;

    return board;
}

int main()
{
    int choiceX = 0;
    int choiceY = 0;

    cout << "Please enter two values" << endl;
    cin >> choiceX;
    cin >> choiceY;

    Choices(choiceX, choiceY);

    /*
        //User choices
        cout << "Do you want to continue?  Press 'Y' for Yes" << endl;
        cin >> choice1;

        if (choice1 != 'Y')
        {
            cout << "Bye";
        }
        else
        {
            cout << "Continue the same game? Press 'Y' for yes" << endl;
            cin >> choice2;

            if (choice2 != 'Y')
            {
                cout << "User wants new game" << endl;

                //call Choice function
            }
            else
            {
                cout << "Continue with old game" << endl;

                //continue
            }
        }
    */

    return 0;
}