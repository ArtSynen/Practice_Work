#include <iostream>
using namespace std;

int main()
{
    int fnum, snum;
    int micrat = 0, macrat = 0, Ncrat = 0;
    cout << "First number ";
    cin >> fnum;
    cout << "Second number ";
    cin >> snum;
    for (int i = 1; i < 1000; i++)
    {
        if (fnum % i == 0 && snum % i == 0)
        {
            macrat = i;
        }
    }
    for (int i = 1000; i > 1; i--)
    {
        if (fnum % i == 0 && snum % i == 0)
        {
            micrat = i;
            Ncrat += 1;
        }
        if (Ncrat == 0)
        {
            micrat = 1;
        }
    }
    cout << "Min crat of to number " << micrat << "\n";
    cout << "Max crat of to number " << macrat << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
