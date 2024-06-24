#include <iostream>

using namespace std;

int main()
{

    // int age;

    // cout << "Enter your age : ";
    // cin >> age;

    // if (age >= 100){

    //     cout << "Grand Pa Why just Why ?";
    // }

    // else if ( age <=0){

    //     cout << "What the fuck boi ??" << endl;
    // }

    // else if (age >= 18){

    //     cout << "You can drive !!! " << endl;
    // }

    // else{
    //     cout << "Go out play with kids BOII !! " << endl;
    // }

    int month;

    std::cout << "Enter the month (1-12) : ";
    cin >> month;

    switch (month)
    {

    case 1:
        cout << "The month is January" << endl;
        break;

    case 2:
        cout << "The month is Feburary" << endl;
        break;

    case 3:
        cout << "The month is March" << endl;
        break;

    case 4:
        cout << "The month is April" << endl;
        break;

    case 5:
        cout << "The month is May" << endl;
        break;

    case 6:
        cout << "The month is June" << endl;
        break;

    case 7:
        cout << "The month is July" << endl;
        break;
    case 8:
        cout << "The month is August" << endl;
        break;

    case 9:
        cout << "The month is September" << endl;
        break;

    case 10:
        cout << "The month is October" << endl;
        break;

    case 11:
        cout << "The month is November" << endl;
        break;

    case 12:
        cout << "The month is December" << endl;
        break;
    
    default :
        cout << "\n\tInvalid " << month << " Input !!!\n" << endl;
        break;
    }
}