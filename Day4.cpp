#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int num;

    // Using ternary operator

    // cout << "Enter a number : ";
    // cin >> num;

    // cout << ((num % 2 == 0) ? "Even" : "Odd") << endl;


    // Logical Operators && || !

    // cout << ((5 > 1 && 4 < 2) ? "True" : "False") << endl;
    // cout << ((5 < 1 || 4 > 10) ? "True" : "False") << endl;
    // cout << (!(5 < 1 || 4 > 10) ? "True" : "False") << endl;

    // string name = "Krishna Noutiyal";

    // cout << "Enter your Name :";
    // getline(cin, name);

    // cout << name.length() << endl;
    // cout << name.empty() << endl;
    // name.clear();
    // cout << name.empty() << endl;
    // cout << name.at(0) << endl;

    // Getting the last character
    // int index = name.length()-1 - 15;
    // cout << name.at(index);
    // name.insert(0, "Hello");
    // name.insert(8, "Hello ");
    // name.erase(7, name.length());
    // cout << name;
    srand(time(NULL));
    
    num = rand()%6;
    // num = 0;
    cout << num;

    return 0;
}