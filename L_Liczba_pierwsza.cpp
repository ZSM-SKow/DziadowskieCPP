/*
    Przykladowy skrypt z lekcji
    
    LICZBA PIERWSZA
*/

#include <iostream>
using namespace std;

int main()
{
	int n,t;
	
	t=1;
	
	cout << "Wpisz liczbe: ";
	cin >> n;
	
	if(n<1) t=0;
	   else {
	   	if(n%2==0) t=1;
	 	else t=0;
	   }
	   	
	if(n==2) cout << "Podana liczba JEST liczba pierwsza" << endl;
	   else if(t==0) cout << "Podana liczba JEST liczba pierwsza" << endl;
			   else cout << "Podana liczba NIE jest liczba pierwsza" << endl;
	
    return 0;
}

