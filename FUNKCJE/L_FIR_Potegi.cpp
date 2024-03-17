/*
    Przykladowy skrypt z lekcji
    
    - FUNKCJA REKURENCYJNA I ITERACYJNA
    
    POTEGI
*/

#include <iostream>
using namespace std;

int pot_it(int a, int b);
int pot_rek(int a, int b);

int main()
{
	int a, b;
	
	cout << "Podaj podstawe: ";
	cin >> a;
	
	cout << "Podaj wykladnik: ";
	cin >> b;
	
	cout << "Wynik(it): " << pot_it(a, b) << endl;
	cout << "Wynik(rek): " << pot_rek(a, b) << endl;
	
	return 0;
}

int pot_it(int a, int b)
{
	int w = 1;
	int i = 0;
	
	while(i < b) {
		if (b == 0) w = 1;
			else if (b == 1) w = a;
					else {
						w *= a;
						i++;
					}
	}
	
	return w;
}

int pot_rek(int a, int b)
{
	int w;
	
	if (b != 0) w = (a*pot_rek(a, b - 1));
		else w = 1;
	
	return w;
}

