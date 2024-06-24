#include "iostream"
#include "cmath"


int main(){
    // double a = 4.5;
    // double b = 5;
    // double s;

    // s = max(a, b);
    // s = min(a, b);
    // s = pow(2,7);
    // s = sqrt(5);
    // s = round(5.6);
    // s = floor(5.99);
    // s = ceil(5.00001);
    // s = abs(-15);
    // s = asin(0.4);
    // s = sinh(0.4);

    // cout << s << endl;s


    // Program to find hipotenous of triangle

    double p;
    double b;
    double h;

    using std::cin;
    using std::cout;
    using std::endl;
    cout << "Enter the Perpendicular (in cm) : ";
    cin >> p;

    cout << "Enter the Base (in cm) : ";
    cin >> b;

    h = sqrt(pow(p, 2) + pow(b, 2));

    cout << "\n\tThe Hypotenous of the Triange is : " << h << endl;

    return 0;
}