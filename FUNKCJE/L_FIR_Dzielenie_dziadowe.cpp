/*
    Przykladowy skrypt z lekcji
    
    - FUNKCJA REKURENCYJNA I ITERACYJNA
    
    DZIELENIE DZIADOWE
*/

#include <iostream>
using namespace std;

int dziel_it(int a, int b);
int dziel_rek(int a, int b);

int main()
{
    int a, b;
    
    cout << "Podaj a: ";
    cin >> a;
    
    cout << "Podaj b: ";
    cin >> b;

    cout << "Wynik(it): " << dziel_it(a, b) << endl;
    cout << "Wynik(rek): " << dziel_rek(a, b) << endl;
    
    return 0;
}

int dziel_it(int a, int b)
{
    int w = 0;
    
    while(a >= b) {
    	a -= b;
    	w++;
	}
    
    return w;
}

int dziel_rek(int a, int b)
{
    int w;
    
    if (a < b) w = 0;
    	else {
    		w = dziel_rek(a - b, b);
    		w++;
		}

    return w;
}
