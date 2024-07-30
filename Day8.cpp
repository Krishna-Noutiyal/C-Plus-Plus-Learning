#include <iostream>

// Learning About :
// Pointers

using namespace std;

int main(){

    int *a = nullptr;
    int b = 10;
    int d = 10;
    // a = &b;
    int *c = nullptr;
    // c = &d;
    cout << " Address of b : " << a  << " Address a : " << &a<< endl;

    cout << " Address of d : " << c  << " Address c : " << &c<< endl;
    return 0;
}