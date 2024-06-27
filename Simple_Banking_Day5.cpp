#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;

int Balance;

// String for transaction record
string trans = "";

int Deposit();
int Withdraw();

int main()
{
    cout << "\n\n\t\t\t\t********** Welcome to Bank of Hackers **********" << endl;

    cout << "\tMoney is stored in various Crypto Currencies and Balance is calucaled with real time precision !!!" << endl;

    string name;
    cout << "\nEnter your Name: ";
    getline(cin >> ws, name);

    cout << "\nHello " + name + " !!" << endl;
    srand(time(NULL));
    Balance = rand();

    int q = 1;
    do
    {
        cout << "\nWhat you want to do ?" << endl;
        cout << "\t1) Check Balance" << endl;
        cout << "\t2) Deposite" << endl;
        cout << "\t3) Withdraw" << endl;
        cout << "\t4) Transaction Details" << endl;
        cout << "\t5) Exit" << endl;
        cout << "\nChoose from 1-5 : ";

        int opt;
        cin >> opt;

        switch (opt)
        {
        case 1:
            cout << "\n\tYour Balance : " + to_string(Balance) + "$" << endl;
            break;
        case 2:
            cout << "\n\tYour Balance Increased to : " + to_string(Deposit()) + "$" << endl;
            break;
        case 3:
            cout << "\n\tYour Balance Decreased to : " + to_string(Withdraw()) + "$" << endl;
            break;
        case 4:
            cout << "\n\tCurrent Balance : " + to_string(Balance) + "$" << endl;
            cout << trans << endl;
            cout << "\tStatment Ends !!" << endl;
        case 5:
            q = 0;
            break;
        }

    } while (q != 0);
}

int Deposit()
{
    cout << "\n\tEnter Amount : ";
    int t;
    cin >> t;
    Balance += t;

    auto my_time = chrono::system_clock::to_time_t(chrono::system_clock::now());
    trans += "\nDeposit at " + (string)ctime(&my_time) + " : +" + to_string(t);

    return Balance;
}
int Withdraw()
{
    cout << "\n\tEnter Amount : ";
    int t;
    cin >> t;
    if (Balance - t >= 0)
    {
        Balance -= t;

        auto my_time = chrono::system_clock::to_time_t(chrono::system_clock::now());

        trans = trans + "\nWithdraw at "+ ((string)ctime(&my_time)) + " : -" + to_string(t);
    }
    else
    {
        cout << "\n\tINSUFFICIENT BALANCE !!" << endl;
    }

    return Balance;
}