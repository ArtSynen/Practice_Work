#include <iostream>
using namespace std;

int main()
{
    int row, col, ret, l, ch = 0;
    cout << "Enter row = ";
    cin >> row;
    cout << "Enter column = ";
    cin >> col;
    int** Numb = new int*[col];
    int* sum = new int[col];
    for (int i = 0; i < col; i++)
    {
        Numb[i] = new int [row];
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << "Enter number into [" << i << "][" << j << "] = ";
            cin >> ret;
            Numb[i][j] = ret;
            sum[i] = 0;
        }
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row - 1; j++)
        {
            ch = 0;
            l = row - 1;
            for (int k = 0; k < row - 1; k++)
            {
                if (Numb[i][j] == Numb[i][j + l])
                {
                    Numb[i][j + l] = 0;
                    ch += 1;
                }
                l -= 1;
            }
            if (ch > 0)
            {
                Numb[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            sum[i] += Numb[i][j];
        }
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << "[" << i << "][" << j << "] = " << Numb[i][j] << "\n";
        }
    }
    for (int i = 0; i < col; i++)
    {
        cout << "Sum of [" << i << "] column = " << sum[i] << "\n";
    }
    cout << ch;
}
