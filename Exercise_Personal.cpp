// Take input from the user for marks scored in 5 different subjects
// calculate its %age and display the character(ASCII) related to that number


#include "iostream"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    string name;
    double English;
    double Maths;
    double Science;
    double Hindi;
    double Computer;


    cout << "Hello Stranger !!" << endl;
    cout << "Can you tell me your name : ";

    cin >> name;

    cout << "\nHello " << name+" !!" << endl;
    cout << "\nI would like to know your marks out of 100 in These subject : " << endl;
    cout << "\nEnglish : ";
    cin >> English;
    cout << "\nHindi : ";
    cin >> Hindi;
    cout << "\nMaths : ";
    cin >> Maths;
    cout << "\nScience : ";
    cin >> Science;
    cout << "\nComputer : ";
    cin >> Computer;

    cout << "\n\nThank you !!" << endl;

    int Marks = English + Hindi + Maths + Science + Computer;
    int Max_Marks = 500;

    double per = (double) Marks / (double) Max_Marks * 100;

    cout << per << "%" << endl;

    // Now I will print the ASCII Character related to the percentage

    cout << "\nASCII representation of your %age : ";
    cout << (char)(int)per << endl;

    string g;
    cout << "\n\nType yes to see a msg from Krishna :";
    cin >> g;

    cout << "               ||\n";
    cout << "               ||\n";
    cout << "               ||\n";
    cout << "         ______||______\n";
    cout << "        ||  |  ||  |  ||\n";
    cout << "        ||__|__||__|__||\n";

    int t;
    cout << "\nEnter to Exit : ";
    cin >> t;

    return 0;
}
