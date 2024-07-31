#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

/*
This version of the game addes the MinMax algorithm
to determine the best move. You can't win :)

*/

int Msg();
int DrawBoard(string *Board_Array);
int BoxArrayToBoardArray(int *Boxes_Array, string *Board_Array);
bool CheckTie(int *Boxes_Array);
int CheckWinner(int *Boxes_Array);
int ComputerTurn(int *Boxes_Array);
int GameInfo();
int Minimax(int *Boxes_Array, int depth, bool isMaximizing);
int Evaluate(int *Boxes_Array);
vector<int> GetAvailableMoves(int *Boxes_Array);

char player_symbol = 'X';
int tiee = 0;
int win = 0;   // 0 = No Winner, 1: Player Won, 2: Computer Won
int turns = 0; // Number of turns
int rounds = 0;
int pwin = 0; // No of times player Won
int cwin = 0; // No of times computer won
int ntie = 0; // No of times both tied
int Boxes[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
string Board[] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

int main()
{
    int turn = 0;  // 1 = Player , 0 = Computer
    bool quit = 0; // 0 mean continue 1 means exit
    int box;       // Box the user is going to select

    // Prints the Welcome message
    Msg();

    cout << "\nPress Enter to Continue : " << endl;
    getchar();

    while (true)
    {
        // Increates Round everything
        rounds++;

        // Resets turn again
        turns = 0;

        // Resets Win
        win = 0;

        //Resets the tiee flag
        tiee = 0;

        // Switching the first turn
        //(turn == 1) ? turn = 0 : turn = 1;

        // Resets the Boxes every round
        for (int i = 0; i < 9; i++)
        {
            Boxes[i] = 0;
        }

        while (tiee == 0 && win == 0)
        {
            // Increases turns every round
            turns++;

            system("cls");
            BoxArrayToBoardArray(Boxes, Board);
            DrawBoard(Board);

            // Player Turn
            if (turn == 1)
            {
                // Player choosing his/her move and storing it in the Boxes Array
                while (true)
                {
                    cout << "Enter your move (1-9) : " << endl;
                    cin >> box;

                    if (0 <= (box - 1) < 9 && Boxes[box - 1] == 0)
                    {
                        Boxes[box - 1] = 1;
                        break;
                    }
                    cout << "!!! WRONG INPUT !!!" << endl;
                }
                turn = 0;
            }

            // Computer Turn
            else
            {
                ComputerTurn(Boxes);
                turn = 1;
            }

            // Updating the Board after Computer and Player's Turn
            BoxArrayToBoardArray(Boxes, Board);

            // Checks for winner
            win = CheckWinner(Boxes);

            // If Player Win
            if (win == 1)
            {
                system("cls");
                DrawBoard(Board);
                cout << "\n\t!! YOU WIN HURREYY !!!" << endl;
                pwin++;
                break;
            }

            // If Computer Win
            else if (win == 2)
            {
                system("cls");
                DrawBoard(Board);
                cout << "\n\t!! I AM BETTER !!" << endl;
                cwin++;
                break;
            }

            // Checks for tie
            tiee = CheckTie(Boxes);

            // If there is a Tie
            if (tiee == 1)
            {
                system("cls");
                DrawBoard(Board);
                cout << "\n\t!! TIE !!!" << endl;
                ntie++;
                break;
            }
        }

        GameInfo();

        cout << "\nWant to Play another Round (1: Continue, 0: Exit) : ";
        cin >> quit;

        if (quit == 0)
        {
            break;
        }
    }
    return 0;
}

int GameInfo()
{
    cout << "Number of Turns Played : " << turns << endl;
    cout << "Total Rounds Played : " << rounds << endl;
    cout << "Player Win : " << pwin << endl;
    cout << "Computer Win : " << cwin << endl;
    cout << "No of Ties : " << ntie << endl;

    double WinPercent = (rounds - ntie ==0) ? 0: ((double)pwin / (double)(rounds - ntie)) * 100;
    cout << "\n\tYOU WON " << WinPercent << "\% OF THE TIME";

    return 0;
}
// Prints the welcome message and asks for player symbol
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
        "\n\t\t!! You can choose whatever symbol you want !!"};

    for (string i : Msg)
    {
        cout << i << endl;
    }

    cout << "\nChoose Your Symbol : ";
    cin >> player_symbol;
    player_symbol = toupper(player_symbol);
    return 0;
}

// DrawsBoard of the tic tak tow
int DrawBoard(string *Board_Array)
{
    string b1 = Board_Array[0];
    string b2 = Board_Array[1];
    string b3 = Board_Array[2];
    string b4 = Board_Array[3];
    string b5 = Board_Array[4];
    string b6 = Board_Array[5];
    string b7 = Board_Array[6];
    string b8 = Board_Array[7];
    string b9 = Board_Array[8];

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
            Board_Array[box] = string(1, player_symbol);
        }
        else if (Boxes_Array[box] == 2)
        {
            Board_Array[box] = (player_symbol == 'X') ? "O" : "X";
        }
    }

    return 0;
}

// If the game has tied returns 1 else 0
bool CheckTie(int *Boxes_Array)
{
    for (int i = 0; i < 9; i++)
    {
        if (Boxes_Array[i] == 0)
        {
            return 0;
        }
    }
    tiee = 1;
    return 1;
}

// Player won returns 1
// Computer won returns 2
// Returns 0 otherwise
int CheckWinner(int *Boxes_Array)
{
    int b1 = Boxes_Array[0];
    int b2 = Boxes_Array[1];
    int b3 = Boxes_Array[2];
    int b4 = Boxes_Array[3];
    int b5 = Boxes_Array[4];
    int b6 = Boxes_Array[5];
    int b7 = Boxes_Array[6];
    int b8 = Boxes_Array[7];
    int b9 = Boxes_Array[8];

    int row1 = (b1 == b2 && b2 == b3) ? b3 : 0;
    int row2 = (b4 == b5 && b5 == b6) ? b6 : 0;
    int row3 = (b7 == b8 && b8 == b9) ? b9 : 0;

    int column1 = (b1 == b4 && b4 == b7) ? b7 : 0;
    int column2 = (b2 == b5 && b5 == b8) ? b8 : 0;
    int column3 = (b3 == b6 && b6 == b9) ? b9 : 0;

    int diagonal1 = (b1 == b5 && b5 == b9) ? b9 : 0;
    int diagonal2 = (b3 == b5 && b5 == b7) ? b7 : 0;

    int tests[] = {row1, row2, row3, column1, column2, column3, diagonal1, diagonal2};

    for (int i : tests)
    {
        if (i != 0)
        {
            return i;
        }
    }
    return 0;
}

// Check for empty boxes left
// Chooses the best box using Minimax algorithm
int ComputerTurn(int *Boxes_Array)
{
    int bestScore = INT_MIN;
    int move = -1;

    for (int i = 0; i < 9; i++)
    {
        if (Boxes_Array[i] == 0)
        {
            Boxes_Array[i] = 2;
            int score = Minimax(Boxes_Array, 0, false);
            Boxes_Array[i] = 0;

            if (score > bestScore)
            {
                bestScore = score;
                move = i;
            }
        }
    }

    if (move != -1)
    {
        Boxes_Array[move] = 2;
    }

    return 0;
}

// Minimax algorithm to determine the best move
int Minimax(int *Boxes_Array, int depth, bool isMaximizing)
{
    int result = CheckWinner(Boxes_Array);

    if (result != 0)
    {
        // Reward is Decreasing with depth
        // This means the reward will be positive if computer is able to win till depth 10 is reached
        // After that it will be negative So this means the MinMax algorithm makes sure the computer is able to win
        // as soon as possible by negetivly rewarding the turn that exceed certain depth
        return (result == 2) ? 10 - depth : depth - 10;
    }
    if (CheckTie(Boxes_Array))
    {
        return 0;
    }

    // Maximizing ( Computer's maximizing move )
    if (isMaximizing)
    {
        int bestScore = INT_MIN;

        for (int i = 0; i < 9; i++)
        {
            if (Boxes_Array[i] == 0)
            {
                Boxes_Array[i] = 2;
                int score = Minimax(Boxes_Array, depth + 1, false);
                Boxes_Array[i] = 0;
                bestScore = max(score, bestScore);
            }
        }
        return bestScore;
    }

    // Minimizing ( Player's maximizing move )
    else
    {
        int bestScore = INT_MAX;

        for (int i = 0; i < 9; i++)
        {
            if (Boxes_Array[i] == 0)
            {
                Boxes_Array[i] = 1;
                int score = Minimax(Boxes_Array, depth + 1, true);
                Boxes_Array[i] = 0;
                bestScore = min(score, bestScore);
            }
        }
        return bestScore;
    }
}

// Returns a list of available moves
vector<int> GetAvailableMoves(int *Boxes_Array)
{
    vector<int> moves;

    for (int i = 0; i < 9; i++)
    {
        if (Boxes_Array[i] == 0)
        {
            moves.push_back(i);
        }
    }

    return moves;
}
