/*
    Przykladowy skrypt z lekcji
    
    SREDNIA
*/

#include <iostream>
using namespace std;

int main()
{
	int n,i,w,s;
    char test = 'y'; 

    while (test!='n' && test!= 'N') {
        cout << "Wpisuj liczby by dodawac (Wpisz N by zatrzymac): ";
        cin >> test;

        if (test!= 'n' && test!= 'N') {
            n=test-'0';
            w=w+n;
            i++;
        }
    }

	s=w/i;

	cout << "Srednia: " << s << endl;

    return 0;
}

