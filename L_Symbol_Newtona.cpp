/*
	Przykladowy skrypt z lekcji
	
	SYMBOL NEWTONA
*/

#include <iostream>
using namespace std;

int main()
{
	int n, k, wynik, i;
	
	wynik = 1;
	i = 1;
	
	cout << "Podaj n: ";
	cin >> n;
	
	cout << "Podaj k: ";
	cin >> k;
	
	if (n < k) {
		cout << "n nie moze byc mniejsze od k!" << endl;
		return 1;
	}
	
	while (i <= k) {
		wynik *= (n - i + 1);
		wynik /= i;
		i++;
	}

	cout << "Symbol Newtona (" << n << " nad " << k << ") wynosi: " << wynik << endl;
	
    return 0;
}

