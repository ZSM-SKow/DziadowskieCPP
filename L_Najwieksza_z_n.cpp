/*
    Przykladowy skrypt z lekcji
    
    NAJWIEKSZA Z N LICZB
*/

#include <iostream>
using namespace std;

int main() 
{
    int ile,i,naj,n;
    i=1;
    
    cout << "Ile liczb bedziesz wprowadzal? ";
    cin >> ile;

    if(ile<=0) cout << "spierdalaj" << endl;
      else {
      	cin >> naj;
      	
      	while(i<ile) {
      		cin >> n;
      		if(n>naj) naj=n;
      		i++;
		  }
	  }
	  
    cout << "Najwieksza liczba to: " << naj << endl;

    return 0;
}

