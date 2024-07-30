#include <iostream>
#include <iomanip>
#include <stdlib.h>

// #include <ios>
using namespace std;

int Msg();
int DrawBoard(string *Board_Array);
int BoxArrayToBoardArray(int *Boxes_Array, string *Board_Array);
bool CheckTie(int *Boxes_Array);
bool CheckWinner(int *Boxes_Array);
int UserInput(int BoxNumber, int *Boxes_Array, string *Board_Array);
int ComputerTurn(int *Boxes_Array, string *Board_Array);

char player_symbol = 'X';
int tiee = 0;
int win = 0;

int main()
{
    int Boxes[] = {0, 2, 0, 0, 2, 2, 2, 2, 0};
    string Board[] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

    int turn = 1; // 1 = Player , 0 = Computer

    int quit = 0;
    int box; // Box the user is going to select

    // Prints the Welcome message
    Msg();

    cout << "\nPress Enter to Continue : " << endl;
    getchar();

    while (tiee == 0 && win == 0)
    {
        system("cls");
        BoxArrayToBoardArray(Boxes, Board);
        DrawBoard(Board);

        if (turn == 1)
        {

            while (true)
            {
                cout << "Enter your move (1-9) : " << endl;
                cin >> box;

                if (0 <= (box-1) < 9 && Boxes[box-1] == 0)
                {
                    Boxes[box - 1] = 1;
                    break;
                }
                cout << "!!! WRONG INPUT !!!" << endl;
            }
            turn = 0;
        }
        else
        {
            cout << "\tComputer ne chal diya" << endl;
            turn = 1;
        }

        CheckTie(Boxes);
    }

    DrawBoard(Board);

    return 0;
}

int Msg()
{
    string Msg[] = {
        "\t\t\t\tWelcome to TIC TAK TOW",
        "\nHOW TO PLAY :",
        "\t\tYou will get a tic tak tow board with 9 boxes",
        "\t\tthe boxes are number like this",
        "\t\t\t     |     |    ",
        "\t\t\t  1  |  2  |  3 ",
        "\t\t\t_____|_____|____",
        "\t\t\t     |     |    ",
        "\t\t\t  4  |  5  |  6 ",
        "\t\t\t_____|_____|____",
        "\t\t\t     |     |    ",
        "\t\t\t  7  |  8  |  9 ",
        "\t\t\t     |     |    ",
        "\t\tTherefore whenever you are asked to choose your box",
        "\t\tyou can type number representing your box as shown above",
    };

    for (string i : Msg)
    {
        cout << i << endl;
    }

    cout << "\nChoose Your Symbol ( X or O ) : ";
    cin >> player_symbol;
    player_symbol = toupper(player_symbol);
    return 0;
}
int DrawBoard(string *Boxes_Array)
{
    string b1 = Boxes_Array[0];
    string b2 = Boxes_Array[1];
    string b3 = Boxes_Array[2];
    string b4 = Boxes_Array[3];
    string b5 = Boxes_Array[4];
    string b6 = Boxes_Array[5];
    string b7 = Boxes_Array[6];
    string b8 = Boxes_Array[7];
    string b9 = Boxes_Array[8];

    string Box[] = {
        "          |     |      ",
        "       " + b1 + "  |  " + b2 + "  |  " + b3 + "   ",
        "    ______|_____|______",
        "          |     |      ",
        "       " + b4 + "  |  " + b5 + "  |  " + b6 + "   ",
        "    ______|_____|______",
        "          |     |      ",
        "       " + b7 + "  |  " + b8 + "  |  " + b9 + "   ",
        "          |     |      "};

    for (string i : Box)
    {
        cout << i << endl;
    }
    return 0;
}

// Coverts the integer in the Boxes_Array into there specific symbols
// and stores them in the Board_Array
int BoxArrayToBoardArray(int *Boxes_Array, string *Board_Array)
{

    for (int box = 0; box < 9; box++)
    {
        if (Boxes_Array[box] == 0)
        {
            Board_Array[box] = " ";
        }
        else if (Boxes_Array[box] == 1)
        {
            Board_Array[box] = string(1,player_symbol);
        }
        else if (Boxes_Array[box] == 2)
        {
            Board_Array[box] = (player_symbol == 'X') ? "O" : "X";
        }
    }

    return 0;
}
bool CheckTie(int *Boxes_Array)
{
    for (int i = 0; i < 9; i++)
    {
        if (Boxes_Array[i] == 0)
        {
            return 0;
        }
    }

    cout << "\n\t!!! TIE !!!" << endl;
    tiee = 1;
    return 1;
}
bool CheckWinner(int *Boxes_Array)
{

    return 0;
}
