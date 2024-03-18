/*
    Przykladowy skrypt z lekcji
    
    - FUNKCJA REKURENCYJNA I ITERACYJNA
    
    N = KWADRAT LICZBY CALKOWITEJ? (CZY JEST I, I * I= N?)
*/

#include <iostream>
using namespace std;

int what_it(int n);
int what_rek(int n, int i);

int main()
{
    int n;
    cout << "Podaj n: ";
    cin >> n;
    
    cout << "Jezeli 1 jest, jezeli 0 nie" << endl;
	cout << "Wynik(it): " << what_it(n) << endl;
    cout << "Wynik(rek): " << what_rek(n, 0) << endl;

    return 0;
}

int what_it(int n)
{
    int w;
    
    int i = 0;
	
	while(i * i <= n) {
		if (i * i == n) w = 1;
			else w = 0;
		i++;
	}

	return w;
}

int what_rek(int n, int i)

{
    int w;
    
    if (i * i == n)
        w = 1;
    else if (i * i > n)
        w = 0;
    else
        w=what_rek(n, i + 1);
        
    return w;
}

