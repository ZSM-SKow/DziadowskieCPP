/*
    Przykladowy skrypt z lekcji
    
    - FUNKCJA REKURENCYJNA I ITERACYJNA
    
    RDC
*/


#include <iostream>
using namespace std;

int rdc_it (int a, int b);
int rdc_rek (int a, int b);

int main()
{
    int a,b;
    
    cout << "Podaj a: ";
    cin >> a;
    
    cout << "Podaj b: ";
    cin >> b;
    
    cout << "RDC(it): " << rdc_it(a, b) << endl;
    cout << "RDC(rek): " << rdc_rek(a, b) << endl;

    return 0;
}

int rdc_it(int a, int b)
{
    int w;
    
    if (a == 0 || b == 0) w = 0;
    	else {
    		while(a >= b) {
    			a -= b;
    			w = a;
			}
			w = a;
		}
    
    return w;
}

int rdc_rek(int a, int b)
{
    int w;
    
    if (a == 0 || b == 0) w = 0;
    	else if (a < b) w = a;
    			else w = rdc_rek(a - b, b);
    	
    return w;
}

