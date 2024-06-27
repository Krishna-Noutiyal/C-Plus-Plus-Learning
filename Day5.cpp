#include "iostream"

using namespace std;

string msg();
string msg(string name);
string msg(string name, int age);

// Global Variable
int num = 100;

int main(){

// Function Overloading
    // cout << msg() << endl;
    // cout << msg("Gauri") << endl;
    // cout << msg("Gauri", 21) << endl;

    // Local Variable
    int num = 10;

    cout << num << endl;
    cout << ::num << endl; // using scope resolution operator :: to call global variable
    cout << num << endl;
return 0;
}


string msg(){
    return "Hello World!";
}

string msg(string name){

    return "Hello " + name;
}

string msg(string name, int age){

    return "Hello " + name + " you are " + to_string(age) + " years old";
}