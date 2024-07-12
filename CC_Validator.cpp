#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
Steps involved in the Luhn algorithm
Let’s understand the algorithm with an example:
Consider the example of an account number “79927398713“.

Step 1 – Starting from the rightmost digit, double the value of every second digit,

Step 2 – If doubling of a number results in a two digit number i.e greater than 9(e.g., 6 × 2 = 12), 
then add the digits of the product (e.g., 12: 1 + 2 = 3, 15: 1 + 5 = 6), to get a single digit number.

Step 3 – Now take the sum of all the digits.

Step 4 – If the total modulo 10 is equal to 0 (if the total ends in zero) then the number is valid according to the 
Luhn formula; else it is not valid.

Since the sum is 70 which is a multiple of 10, the account number is possibly valid.
*/

double Validate(string const num)
{
    int len = num.length();

    int inum[len];
    int dinum[len];
    fill(inum, inum + len, 0);
    fill(dinum, dinum + len, 0);

    for (int i = 0; i < len; i++)
    {
        inum[i] = (int)num[i] - 0x30;
    }

    cout << endl;

    // Doubling the 2nd term form last
    for (int i = len-1; i >= 0;i-=2){
        // cout << inum[i]  << " ";

        int dbl = inum[i] *2;

        if (dbl <=9){
            dinum[i] = dbl;
            continue;
        }


        dinum[i] = dbl % 10;
        dbl /= 10;
        dinum[i - 1] = dbl;

    }

    for (int i : dinum)
    {
        cout << i;
    }

    int sum_odd_inum = 0;
    int sum_dinum = 0;

    // cout << "inum odd (l-r) : ";
    cout << endl;
    for (int i = 0; i < len;i+=2){
        sum_odd_inum += inum[i];

        cout << inum[i] << "0";
    }

    for (int i : dinum){
        sum_dinum += dinum[i];
    }

    cout << endl;
    cout << sum_odd_inum << endl;
    cout << sum_dinum << endl;
    string msg = ((sum_odd_inum + sum_dinum) % 10 == 0) ? "\n\t\033[1;32mThis is Credit card Number\033[0m" : "\n\t\033[1;31mNot a Credit Card Number\033[0m";
   
    cout << msg << endl;

    return 0;
}

int main()
{

    // double long number;
    string number;
    cout << "Enter CC Number : ";
    getline(cin, number);

    Validate(number);
    return 0;
}