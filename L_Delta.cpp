/*
    Przykladowy skrypt z lekcji
    
    DELTA
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;
	
	if(a==0) cout << "Pal gume";
		else 
		{
    		int d;
    		d=(b*b)-(4*a*c);
    		cout << "Delta: " << d << endl;
    
    		if(d>0) {
        	int d1,x1,x2;
        	d1=sqrt(d);
        	x1=(-b-d1)/(2*a);
        	x2=(-b+d1)/(2*a);
        
        	cout << "x1: " << x1 << endl;
        	cout << "x2: " << x2 << endl;
    		}
    		
    	else if(d==0) {
        	int x;
        	x=(-b)/(2*a);
        
        	cout << "x: " << x << endl;
    			}
    	else {
        	cout << "Brak pierwiastków rzeczywistych" << endl;
    		}
		}
    system("pause");
    return 0;
}

