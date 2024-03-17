/*
	Przykladowy skrypt z lekcji
	
	Dodawaj do STOP
*/

#include <iostream>
using namespace std;

int main() {
    int w = 0;
    int n;
    char test = 'y'; 

    while (test!='n' && test!= 'N') {
        cout << "Wpisuj liczby by dodawac (Wpisz N by zatrzymac): ";
        cin >> test;

        if (test!= 'n' && test!= 'N') {
            n=test-'0';
            w=w+n;
        }
    }

	cout << "Suma: " << w << endl;
	
	system("pause");
    return 0;
}

