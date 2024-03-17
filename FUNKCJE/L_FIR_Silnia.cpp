/*
    Przykladowy skrypt z lekcji
    
    - FUNKCJA REKURENCYJNA I ITERACYJNA
    
    SILNIA
*/

#include <iostream>
using namespace std;

int silnia_it(int n);
int silnia_rek(int n);

int main() 
{
    int n;
    
    cout << "Daj n: ";
    cin >> n;
    
    cout << "Wynik(it): " << silnia_it(n) << endl;
    cout << "Wynik(rek): " << silnia_rek(n) << endl;
    
    return 0;
}

int silnia_it(int n)
{
    int i = 1;
    int w = 1;
    
    while(i <= n) {
        w *= i;
        i++;
    }
    
    return w;
}

int silnia_rek(int n)
{
	int w = 0;
	
	if (n == 0 || n == 1) w = 1;
		else w = n * silnia_rek(n-1);
}

