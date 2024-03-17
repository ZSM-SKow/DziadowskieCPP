/*
    Przykladowy skrypt z lekcji
    
    FIBONACCI
*/

#include <iostream>
using namespace std;

int main()
{
	int a,w,i,f1,f2;
	
	f1=1;
	f2=1;
	w=0;
	i=1;
	
	cout << "Daj a: ";
	cin >> a;
	
	while(i!=a-1) {
		i++;
		w=f1+f2;
		f1=f2;
		f2=w;
	}
	
	cout << "Wynik: " << w << endl;
	
    return 0;
}
