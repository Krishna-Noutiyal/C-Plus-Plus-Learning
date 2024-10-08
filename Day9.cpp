// We will see about dynamic memory

#include <iostream>
#include <cstdint>
using namespace std;
int main(){
    int *num = nullptr;
    // cout << sizeof num << endl;
    // cout <<  num << endl;
    // cout << &num << endl;

    // num = new int;
    // *num = 10;
    // int a = 4;
    // cout <<  a << endl;
    // cout << sizeof num << endl;
    // cout <<  sizeof *num << endl; // value of pointer => Address of new memory location
    // cout <<  *num << endl; // Value of New Memory Address
    // cout <<  &num << endl; // address of pointer
    // cout <<  *num << endl; // address of pointer
    // cout <<  *&num << endl; // value of pointer => Address of new memory location

    /*
    Dynamically allocation memory to an array
    */

    // uintptr_t adderess = 0x21b1e881b40;
    // int value = *reinterpret_cast<int *>(adderess);

    // cout << "Value : " << value << endl;

    // char *arr = nullptr;

    // cout << "Enter your Name : ";
    // // arr = new char[10];
    // arr = new char[20];
    // cin >> arr;

    // cout << "Address of New Memory :" << &arr << endl;
    // cout << "Value at New Memory : " << arr << endl;
    // cout << "Size of New Memory : " << sizeof arr << endl;

    // for (int i = 0; i < 20; i ++){
    //     cout << i << " : " << arr[i] << endl;
    // }

    // delete[] arr;
    return 0;
}