/*
    Przykladowy skrypt z lekcji
    
    - FUNKCJA REKURENCYJNA I ITERACYJNA
    
    SYMBOL NEWTONA
*/

#include <iostream>
using namespace std;

int silnia(int n);
int new_it(int a, int b);
int new_rek(int a, int b);

int main()
{
    int a, b;

    cout << "Daj a: ";
    cin >> a;
    
    cout << "Daj b: ";
    cin >> b;
    
    cout << "Wynik(it): " << new_it(a, b) << endl;
    cout << "Wynik(rek): " << new_rek(a, b) << endl;
    
    return 0;
}

// Silnia

int silnia(int a)
{
    int i, silnia;
    
    silnia = 1;
    i = 1;
    
    while(i <= a) {
               silnia *= i;
               i++;
    }
    
    return silnia;
}

// Iteracja

int new_it(int a, int b)
{
    int w = silnia(a) / (silnia(b) * silnia(a - b));
    
    return w;
}

// Rekurencja

int new_rek(int a, int b)
{
    int w;
    
    if (b == 0 || b == a) w = 1;
       else w = new_rek(a - 1, b - 1) + new_rek(a - 1, b);
       
    return w;
}

