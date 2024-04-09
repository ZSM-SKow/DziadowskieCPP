#include <iostream>
using namespace std;

int potegi_it(int a, int b);
int potegi_rek(int a, int b);

int main()
{
    int a, b, w1, w2;

    cout << "Daj a: ";
    cin >> a;
    
    cout << "Daj b: ";
    cin >> b;

    w1=potegi_it(a,b);
    w2=potegi_rek(a,b);

    cout << "Wynik(IT): " << w1 << endl;
    cout << "Wynik(REK): " << w2 << endl;
    
    system("pause");
    return 0;
}

int potegi_it(int a,int b)
{
    int w1,i;
    
    i=0;
    w1=1;
    
    while(i<b) {
               w1=w1*a;
               i++;
    }
    
    return w1;
}

int potegi_rek(int a,int b)
{
    int w2;
    
    if (b==0) w2=1;
       else w2=potegi_rek(a,b-1)*a;

    return w2;
}
