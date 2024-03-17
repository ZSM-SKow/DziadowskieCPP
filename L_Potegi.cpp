/*
    Przykladowy skrypt z lekcji
    
    POTEGOWANIE
*/

#include <iostream>
using namespace std;

int main()
{
    int a,b,w,i;
    
    cout << "Daj podstawe: ";
    cin >> a;
    cout << "Daj wykladnik: ";
    cin >> b;
    
    i=0;
    w=1;
    
    do {
        if(b==0) w=1;
    	  else if(b==1) w=a;
    	         else {
        	w=w*a;
        	i++;
    	}
    } while(i<b);

    cout << "Wynik: " << w << endl;
    
    return 0;
}

