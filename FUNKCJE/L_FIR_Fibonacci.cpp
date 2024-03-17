/*
    Przykladowy skrypt z lekcji
    
    - FUNKCJA REKURENCYJNA I ITERACYJNA
    
    FIBONACCI
*/
#include <iostream>
using namespace std;

int fib_it(int n);
int fib_rek(int n);

int main()
{
	int n;
	
	cout << "Podaj liczbe: ";
	cin >> n;
	
	cout << "Wynik(it): " << fib_it(n) << endl;
	cout << "Wynik(rek): " << fib_rek(n) << endl;
	
    return 0;
}

int fib_it(int n)
{
	int fx, fy, fz, i;
	
	fx = 0;
	fy = 1;
	fz = 1;
	
	i = 2;
	
	while(i <= n) {
		fz = fx + fy;
		fx = fy;
		fy = fz;
		i++;
	}
	
	return fz;
}

int fib_rek(int n) 
{
	int w = 0;
	
	if (n <= 1) w = n;
		else w = fib_rek(n - 1) + fib_rek(n - 2);
	
	return w;
}
