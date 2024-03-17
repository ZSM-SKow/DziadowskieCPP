/*
	Przykladowy skrypt z lekcji
	
	SILNIA
*/

#include <iostream>
using namespace std;

int main()
{
	int n,w,i;
	
	w=1;
	i=1;
	
	cout << "Daj n: ";
	cin >> n;
	
	while(i<=n) {
		w=w*i;
		i++;
	}

	cout << "Wynik: " << w << endl;
	
    return 0;
}
