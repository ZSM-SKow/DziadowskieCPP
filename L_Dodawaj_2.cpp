/*
    Przykladowy skrypt z lekcji
    
    ZWIEKSZAJ O 2
*/

#include <iostream>
using namespace std;

int main()
{
	int n,i,w;
	
	cout << "daj n: ";
	cin >> n;
	
	w=0;
	
	while(i<n) {
		w=w+2;
		i++;
	}
	
	cout << "Wynik: " << w << endl;
	
    return 0;
}

