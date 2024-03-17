/*
    Przykladowy skrypt z lekcji
    
    NWD - 2 metodami
*/

#include <iostream>
using namespace std;

int main()
{
	int a,b,a1,b1,w;
	
	cout << "Daj a: ";
	cin >> a;
	cout << "Daj b: ";
	cin >> b;
	
	a1=a;
	b1=b;
	
	// Metoda odejmowania
	
	while(a!=b) {
		if(a>b) a=a-b;
		   else b=b-a;
	}
	
	// Metoda modulo
	
		while(b1 != 0) {
			w=a1%b1;
			a1=b1;
			b1=w;
	}
	
	cout << "NWD tych liczb to:(odejmowaniem) " << a << endl;
	cout << "NWD tych liczb to:(modulo) " << a1 << endl;
	
    system("pause");
    return 0;
}

