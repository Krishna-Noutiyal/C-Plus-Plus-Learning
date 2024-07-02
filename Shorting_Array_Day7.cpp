#include <iostream>
#include <chrono>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));


    int num[100000];
    int num1[200000];
    int s = size(num);

    // cout << "\nOriginal Array :\n";
    for (int i = 0; i < s;i++){
        num[i] = rand() % s +1;
        num1[i] = rand() % s +1;
        // cout << to_string(num[i]) << ", ";
    }
    
    

    int t;


    // cout << "\nSorted Array :\n";
    // auto start = chrono::high_resolution_clock::now();
    // for (int i = 0; i < s-1 ; i++)
    // {

    //     for (int j = 0; j < s-i-1; j++)
    //     {
    //         if (num[j] > num[j + 1])
    //         {
    //             int t = num[j];
    //             num[j] = num[j + 1];
    //             num[j + 1] = t;
    //         }
    //         else
    //         {
    //             continue;
    //         }
    //     }
    // }

    // auto end = chrono::high_resolution_clock::now();

    // auto dif = chrono::duration_cast<chrono::milliseconds>(end - start);

    auto start1 = chrono::high_resolution_clock::now();
    // Sorting using default function
    sort(num1, num1 + s);

    auto end1 = chrono::high_resolution_clock::now();

    auto dif1 = chrono::duration_cast<chrono::milliseconds>(end1-start1);

    // for (int i: num1){
    //     cout << to_string(i) << ", ";
    // }




    // cout << "\nTime taken by Bubble Sort or Linear Sort: " << dif.count() << "ms";
    cout << "\nTime taken by Quick Sort: " << dif1.count() << "ms";
    return 0;
}