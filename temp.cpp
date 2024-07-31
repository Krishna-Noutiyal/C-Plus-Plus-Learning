#include <iostream>
#include <string>

using namespace std;



int main(){

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {

        cout << rand() % 9<< endl;
    }

            return 0;
}