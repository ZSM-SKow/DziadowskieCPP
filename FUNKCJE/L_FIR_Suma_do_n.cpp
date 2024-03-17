/*
    Przykladowy skrypt z lekcji
    
    - FUNKCJA REKURENCYJNA I ITERACYJNA
    
    SUMA OD 1 DO N
*/

#include <iostream>
using namespace std;

int s1n_it(int n);
int s1n_rek(int n);

int main()
{
	int n;
	
	cout << "Daj n: ";
	cin >> n;
	
	cout << "Wynik(it): " << s1n_it(n) << endl;
	cout << "Wynik(rek): " << s1n_rek(n) << endl;
	
}

int s1n_it(int n)
{
	int i = 1;
	int w = 0;
	
	while(i <= n) {
		w += i;
		i++;
	}
	
	return w;
}

int s1n_rek(int n) 
{
	int w;
	
	if (n == 1) w = 1;
		else w = n + s1n_rek(n - 1);
}
