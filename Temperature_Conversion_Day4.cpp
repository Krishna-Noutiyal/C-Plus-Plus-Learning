#include <iostream>

using namespace std;

int main(){

    cout << "\t***** CELCIOUS TO FERENHEIGHT *****"<< endl;

    float temp;
    char unit;

    cout << "Enter a temperature ( only Value ) : ";
    cin >> temp;

    cout << "Was is *Cel or *Fer ? ( C or F ) : ";
    cin >> unit;

    float New_temp;

    if (unit == 'C' || unit == 'c'){
        New_temp = (temp * 1.8) + 32;
    }
    else if (unit == 'F' || unit == 'f')
    {
        New_temp = (temp - 32) / 1.8;
    }
    else{
        cout << "\n\t!!! INVALID INPUT !!!"<< endl;
    }

        cout << "\n\t" << ((unit == 'C' || unit == 'c') ? "Temperature in Ferenheight : " : "Temperature in Celcious : ") << New_temp << endl;
}