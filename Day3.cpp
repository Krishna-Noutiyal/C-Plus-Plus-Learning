#include <iostream>
#include <numeric>
using namespace std;
int main(){

    // string name;
    int age;
    // string age;
    char name[256];


    cout << "What is your Full Name ? " << endl;
    // getline(cin >> ws, name);
    // getline(cin, name);
    
    // This is how you clean the input buffer
    // cin.ignore(1, '\n');
    cin.ignore(CHAR_MAX, '\n'); // CHAR_MAX = 0x7f -> 128 bits -> 16 bytes
    cin.getline(name, 256);
    cout << "What's your age ?" << endl;
    cin >> age;              // When taking input using cin a newline character is added to the input buffer
    // getline(cin, age);       // The getline() function gets the newline character and adds in to the age thus age = \n

    cout << "\n\tHello " << name << " !!\n" << endl;
    cout << "\tYou are " << age << " years old" << endl;

    return 0;
}