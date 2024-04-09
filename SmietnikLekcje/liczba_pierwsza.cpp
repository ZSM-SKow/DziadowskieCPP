/*
  21-05-2024
  
  Szymon Kowalski 2F
*/


#include <iostream>
using namespace std;

int main()
{
    int n,x=1,i;
    cout << "daj a: ";
    cin >> n;
    
    // Program bêdzie sprawdza³ dopóki modulo nie bêdzie 0
    
    if(n<2) x=0;
       else {     
            for(i=2;(i<=n/2)&&(x==1);i++) 
            {
                if(n%i==0) x=0;
            }
    }
    
    if(x==0) cout << "a nie jest liczba 1" << endl;
       else cout << "a jest liczba 1" << endl;

    system("pause");
    return 0;
}