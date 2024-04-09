#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "podaj wartosc zmiennej a: ";
    cin >> a;
    
    int b;
    cout << "podaj wartosc zmiennej b: "; 
    cin >> b;
    
    if (b==0)
    cout << "dupa zimna";
    system ("pause");
    
    int suma;
    suma=a+b;
    cout << suma << endl;
    
    int iloczyn;
    iloczyn=a*b;
    cout << iloczyn << endl;
    
    int iloraz;
    iloraz=a/b;
    cout << iloraz << endl;
    
    system("pause");
    return 0;
}
