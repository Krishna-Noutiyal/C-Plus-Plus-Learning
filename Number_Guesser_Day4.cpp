#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int tries=1;
    int num;
    int guess;
    int diff;
    int n = 1000; // Number range to guess
    double VERY_NEAR_ACC = 0.02; // Near Accuracy to give hint
    double NEAR_ACC = 0.05; // Near Accuracy to give hint
    double MID_ACC = 0.2; // Middle Accuracy to give hint

    cout << "************* Welcome to Number Guesser *************" << endl;
    cout << "You will have to guess the number I am thinking !!" << endl;
    cout << "Pretty Easy RIGHT ?\n\n"
         << endl;

    srand(time(NULL)); // Initializing the seed
    guess = rand() % n + 1;


    // cout << guess << endl;
    // cout << "VERY_NEAR_ACC : " << n * VERY_NEAR_ACC << endl;
    // cout << "NEAR_ACC : " << n * NEAR_ACC << endl;
    // cout << "MID_ACC : " << n * MID_ACC << endl;

    do
    {
        cout << "Guess the number ( 1-" << n << " ) : ";
        cin >> num;
        diff = abs(num - guess);

        if (num == guess)
        {
            cout << "\n\n\t\T************* YOU WIN *************" << endl;
            cout << "\n\t\tIt took you " << tries << " tries to guess number " << guess << "\n\n" << endl;
            break;
        }
        else if (diff <= n * VERY_NEAR_ACC) // if the difference is less then NEAR_ACC
        {
            cout << "!! VERY VERY CLOSE !!" << endl;
        }
        else if (diff <= n * NEAR_ACC) // if the difference is less then NEAR_ACC
        {
            cout << "VERY CLOSE !!" << endl;
        }
        else if (num > guess && diff < n * MID_ACC) // If the difference is less then 30%
        {
            cout << "A Little LESS " << endl;
        }
        else if (num < guess && diff < n * MID_ACC) // If the difference is less then 30%
        {

            cout << "A Little MORE" << endl;
        }
        else if (num < guess)
        {
            cout << "Very LOW !!" << endl;
        }
        else if (num > guess)
        {
            cout << "Very HIGH !!" << endl;
        }

        tries++;
    } while (num != guess);
}