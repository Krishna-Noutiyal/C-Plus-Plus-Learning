#include <iostream>

using namespace std;

int main()
{
    int row = 4;
    int col = 5;
    int mtx[row][col] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}};

    int size = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mtx[i][j] != 0)
                size++;
        }
    }
    int sprs[3][size];

    int k = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mtx[i][j] != 0)
            {

                sprs[0][k] = i;
                sprs[1][k] = j;
                sprs[2][k] = mtx[i][j];
                k++;
            }
        }
    }

    int space = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << sprs[i][j] << " ";
            space++;
        }
        cout << endl;
    }

    cout << "\n Total Memory using sparce matrix : " << 4 * space << " bytes" << endl;
    cout << "\n Total Memory using normal matrix : " << 4 * row * col << " bytes" << endl;

    return 0;
}