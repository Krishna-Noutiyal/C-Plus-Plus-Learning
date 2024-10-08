// We will learn about fuction template

#include <iostream>

using namespace std;

template <typename T, typename U>
auto avg(T n1, U n2){

    return (n1 + n2) / 2;
}

int main(){

    cout << avg(2.2, 2) << endl;
    return 0;
}