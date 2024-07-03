#include <iostream>
#include <string>

using namespace std;

void test(string ar[]){
    cout << ar << endl;
    cout << &ar << endl;
    cout << *ar << endl;
}
int main(){
    string ar[] = {"Krishna", "Gauri", "Ishika", "Rishu", "Chirag"};
    int a = 5;

    cout << a << endl;
    cout << &a << endl;
    cout << *&a << endl;


    cout << ar << endl;
    cout << &ar << endl;
    cout << *ar << endl;

    test(ar);
    return 0;
}