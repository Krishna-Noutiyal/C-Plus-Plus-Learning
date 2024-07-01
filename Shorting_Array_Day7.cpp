#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));


    int num[100];
    int s = size(num);

    cout << "\nOriginal Array :\n";
    for (int i = 0; i < s;i++){
        num[i] = rand() % s +1;
        cout << to_string(num[i]) << ", ";
    }
    
    

    int t;


    cout << "\nSorted Array :\n";
    for (int i = 0; i < s ; i++)
    {

        for (int j = 0; j <= s-i-1; j++)
        {
            if (num[j] > num[j + 1])
            {
                int t = num[j];
                num[j] = num[j + 1];
                num[j + 1] = t;
            }
            else
            {
                continue;
            }
        }
    }

    for (int i: num){
        cout << to_string(i) << ", ";
    }
    return 0;
}