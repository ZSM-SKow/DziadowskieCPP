#include <iostream>
using namespace std;

int sumowanie(int a, int b)
{
    int suma;
    
    suma=a+b;
    
    return suma;
}

int main()
{
    int a,b,suma;
    
    cout << "daj a: ";
    cin >> a;
    cout << "daj b: ";
    cin >> b;
    
    suma=sumowanie(a,b);
    
    cout << "suma: " << suma << endl;
    
    system("pause");
    return 0;
}