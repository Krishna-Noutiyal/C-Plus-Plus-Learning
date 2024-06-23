#include <iostream>

using std::array;
using std::cout;
using std::endl;
using std::string;

namespace first{
    string name = "Krishna";
}

namespace last{
    string name = "Noutiyal";
}


int main(){
    // string name = "Gauri";
        
    // cout << name << endl;

    // using namespace last; //This results in error because you can not have 2 namespace with same element

    // cout << name << endl;
    // cout << name << endl;

    // typedef std::string str;

    // str msg = "Hello World!";

    // cout << msg << endl;

    // typedef int[2] tenelement_t; // you cant use arrays with typedef 

    // Insted of using typedef we can use 'using' keyword

    using str = string;

    str random_word = "wow";

    cout << random_word << endl;

    // Type Conversion

    // Explicity converting 2.2 into an integer and the to double
    double b = (int) 2.2;

    cout << b << endl;
    cout << (int) b << endl;

    return 0;
}
