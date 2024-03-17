/*
    Przykladowy skrypt z lekcji
    
    PARZYSTA CZY NIE
*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Podaj liczbe: ";
    cin >> n;

    int rdc=n%2;

    if (rdc==0)
    {
        cout << "Podana liczba jest parzysta." << endl;
    }
    else
    {
        cout << "Podana liczba nie jest parzysta." << endl;
    }

    return 0;
}

