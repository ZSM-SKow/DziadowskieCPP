/*
    Przykladowy skrypt z lekcji
    
    - FUNKCJA REKURENCYJNA I ITERACYJNA
    
    (NIE)PARZYSTA?
*/

#include <iostream>
using namespace std;

int par_it(int n);
int par_rek(int n);

int main()
{
    int n;

    cout << "Podaj liczbe: ";
    cin >> n;
    
    cout << endl; // Estetyka
    
    cout << "Jezeli 1 = jest parzysta" << endl;
    cout << "Jezeli 0 =  nie jest" << endl;
    
    cout << endl; // Estetyka
    
    cout << "Wynik(it): " << par_it(n) << endl;
    cout << "Wynik(rek): " << par_it(n) << endl;
    
    return 0;
}

int par_it(int n)
{
	int w;
	
	int rdc=n%2;
	
	if (rdc==0) w = 1;
    	else w = 0;
    	
    return w;
}

int par_rek(int n)
{
	int w;
	
	if (n == 0) w = 1;
		else if (n == 1) w = 0;
				else w = par_rek(n - 2);
				
	return w;
}

