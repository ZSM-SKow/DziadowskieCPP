/*
    Przykladowy skrypt z lekcji
    
    LICZBA DOSKONALA
*/

#include <iostream>
using namespace std;

int main()
{
	int i,j,a,n;
	
	i=2;
	j=1;
	
	cout << "Daj n: ";
	cin >> n;
	
	while(i!=n) {
		a=n%i;
		if(a==0) {
			j=j+i;
			i++;
		} 
		else i++;
	}
	
	if(i==n && j==n) cout << "JEST" << endl;
	  else cout << "NIE JEST" << endl;

    return 0;
}

