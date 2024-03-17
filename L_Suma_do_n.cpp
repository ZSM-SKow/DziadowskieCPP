/*
    Przykladowy skrypt z lekcji
    
    SUMA LICZB OD 1 DO N
*/

#include <iostream>
using namespace std;

int main()
{
    int n,i,w;
	
	cout << "Daj n: ";
	cin >> n;
	
	i=1;
	w=0;
	
	while(i<=n) {
		w=w+i;
		i++;
	}
	
	cout << "Wynik: " << w << endl;
	
	return 0;
}

