#include <iostream>
using namespace std;

int silnia(int n);
int new_it(int a, int b);
int new_rek(int a, int b);

int main()
{
    int a, b, w1, w2;

    cout << "Daj a: ";
    cin >> a;
    cout << "Daj b: ";
    cin >> b;

    w1 = new_it(a,b);
    w2 = new_rek(a,b);
    
    cout << "Wynik(it): " << w1 << endl;
    cout << "Wynik(reK): " << w2 << endl;
    

    system("pause");
    return 0;
}

int silnia(int a)
{
    int i,silnia;
    
    silnia = 1;
    i = 1;
    
    while(i <= a) {
               silnia *= i;
               i++;
    }
    
    return silnia;
}
int new_it(int a, int b)
{
    int w1 = silnia(a) / (silnia(b) * silnia(a-b));
    
    return w1;
}

int new_rek(int a, int b)
{
    int w2;
    
    if (b == 0 || b == a) w2 = 1;
       else w2 = new_rek(a - 1, b - 1) + new_rek(a - 1, b);
       
    return w2;
}
