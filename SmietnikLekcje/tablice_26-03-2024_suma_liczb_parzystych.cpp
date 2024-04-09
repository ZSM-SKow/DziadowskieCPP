#include <iostream>
using namespace std;

int main() {
    int n,t;
    
    cout << "Podaj n: ";
    cin >> n;
    
    int tab[n];
    
    int i = 0;
    
    while (i < n) {
        tab[i] = i + 1;
        //cout << tab[i] << " ";
        i++;
    }
    
    int suma = 0;
    
    i = 0;
    
    t=1;
    
    if(n<1) t=0;
	   else {
	   	if(n%2==0) t=1;
	 	else t=0;
	   }
	   	
	if(n==2) cout << "Podana liczba JEST liczba pierwsza" << endl;
	   else if(t==0) cout << "Podana liczba JEST liczba pierwsza" << endl;
			   else cout << "Podana liczba NIE jest liczba pierwsza" << endl;
    
    cout << "Suma: " << suma << endl;
    
    system("pause");
    return 0;
}
