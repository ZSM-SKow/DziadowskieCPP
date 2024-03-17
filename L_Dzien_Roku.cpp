/*
    Przykladowy skrypt z lekcji
    
    DZIEN ROKU NA DZIEN DNIA
*/

#include <iostream>
using namespace std;

int main()
{
	int dzien;
		cout << "Podaj dzien roku: ";
		cin >> dzien;
	
	int wynik = dzien % 7;
	
	switch(wynik)
	{
		case 0: 
			cout << "NIEDZIELEK" << endl;
			break;
			
		case 1:
			cout << "PONIEDZIALEK" << endl;
			break;
			
		case 2:
			cout << "WTOREK" << endl;
			break;
			
		case 3:
			cout << "SRODEK" << endl;
			break;
			
		case 4:
			cout << "CZWARTEK" << endl;
			break;
			
		case 5:
			cout << "PIATEK" << endl;
			break;
			
		case 6:
			cout << "SOBOTEK" << endl;
			break;
			
		default:
			cout << "Cos nie halo" << endl;
			break;
	}
	
    system("pause");
    return 0;
}

