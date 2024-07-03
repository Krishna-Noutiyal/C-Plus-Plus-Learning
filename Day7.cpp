#include <iostream>
using namespace std;

double sum(double arr[], int size);

int *randarr(int n_elements);
void find();
void fill_elements();

void The_const(const string (&ary)[],const double (&ary2)[]){

    cout << &ary << endl;
    cout << &ary2 << endl;
    // cout << sizeof(ary) << endl;
    // cout << sizeof(ary2) << endl;
}

int main()
{

    string arr[] = {"Krishna", "Gauri", "Lucky", "Shibbu"};

    double marks[] = {15, 45, 95, 57, 65, 55};

    // size = sizeof(marks) / sizeof(double);

    // cout << (char)sum(marks, size(marks)) << endl;

    // int l = size(arr);
    // cout << l << endl;
    // Iterating using for loop
    // for (int i = 0; i < size(arr); i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // Iterating using for each loop

    // for (string s : arr){
    //     cout << s << endl;
    // }


    // fill_elements();

    cout << &arr << endl;
    cout << &marks << endl;

    The_const(arr, marks);
    return 0;
}


void fill_elements(){

    string team[100];
    int s = size(team);
    int d = 4;

    fill(team, team + s/d, "Red Team");
    fill(team + s / d, team + (s/d)*2, "Blue Team");
    fill(team + (s / d)*2, team + s, "Dev-Ops");

    for (int i = 0; !team[i].empty();i++)
    {
        cout << i << " : " <<team[i] << endl;
    }
}

void find(){

    // Can't add the array as a pointer
    // pointer to an array
    // int *n_number = randarr(10000);

    int n_number[10000];

    srand(time(NULL));
    for (int i = 0; i <= 10000; i++)
    {

        // Array of int from 0-10000

        n_number[i] = rand() % 10000;
    }

    // Size of n_number array
    int size = sizeof(n_number) / sizeof(int);

    // cout << "Last element of n_numer : " << n_number[1000] << endl;

    // for (int i: n_number){
    //     cout << i << endl;
    // }

    int q = 0;
    do
    {

        int n;
        cout << "Enter a number to Search : ";
        cin >> n;

        cin.clear();
        fflush(stdin);

        int flag = 1;
        for (int i = 0; i <= size; i++)
        {

            if (n_number[i] == n)
            {
                cout << "Found : " << to_string(n) << " at index : " << to_string(i) << endl;
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "Unable to find the number !!!" << endl;
        }

        cout << "Press 1 to exit : ";
        cin >> q;

    } while (q != 1);
}


double sum(double arr[], int size)
{

    double s = 0;
    for (int i = 0; i < size; i++)
    {
        s += arr[i];
    }
    return s;
}

// int *randarr(int n_elements)
// {

//     int n_number[n_elements];

//     srand(time(NULL));
//     for (int i = 0; i <= n_elements; i++)
//     {

//         // Array of int from 0-n_elements

//         n_number[i] = rand() % n_elements;
//     }

//     return n_number;
// }
