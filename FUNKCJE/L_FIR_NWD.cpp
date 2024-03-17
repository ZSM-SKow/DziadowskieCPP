/*
    Przykladowy skrypt z lekcji
    
    - FUNKCJA REKURENCYJNA I ITERACYJNA
    
    NWD - (I) 2 METODAMI
*/

#include <iostream>
using namespace std;

int nwd_int1(int a, int b);
int nwd_int2(int a, int b);
int nwd_rek(int a, int b);

int main()
{
	int a,b;
	
	cout << "Daj a: ";
	cin >> a;
	cout << "Daj b: ";
	cin >> b;
	
	cout << "NWD tych liczb to(it1): " << nwd_int1(a, b) << endl;
	cout << "NWD tych liczb to(it2): " << nwd_int2(a, b) << endl;
	cout << "NWD tych liczb to(rek): " << nwd_rek(a, b) << endl;
	
	
    system("pause");
    return 0;
}

int nwd_int1(int a,int b) 
{
	int a1, b1, w;
	
	// Metoda odejmowania
	
	while(a != b)  {
		if(a > b) a -= b;
		   else b -= a;
	}
	
	return a;
}

int nwd_int2(int a, int b)
{
	int w;
	
		
	// Metoda modulo
	
	while(b != 0) {
		w=a%b;
		a=b;
		b=w;
	}
	
	return a;
}

int nwd_rek(int a, int b)
{
	int w;
	
	if (b == 0) w = a;
		else w = nwd_rek(b, a % b);
	
	return w;
}

