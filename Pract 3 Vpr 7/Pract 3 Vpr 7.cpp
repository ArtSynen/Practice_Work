#include <iostream>
using namespace std;

int main()
{
    int Vt = 0, Vg = 0, I = 0, Mp = 0, Mt = 0, m = 0, tk = 0;
    cout << "Input Vg ";
    cin >> Vg;
    cout << "Input I ";
    cin >> I;
    cout << "Input Mp ";
    cin >> Mp;
    cout << "Input Mt ";
    cin >> Mt;
    cout << "Input m ";
    cin >> m;
    cout << "Input tk ";
    cin >> tk;
    for (int t = -5; t < tk; t++) 
    {
        Vt = Vg * ((I * (Mp + Mt / Mp + Mt - m * t)) / (I * (Mp + Mt / Mp)));
        cout << "V rocket = " << Vt << " in second " << t << "\n";
    }  
}
