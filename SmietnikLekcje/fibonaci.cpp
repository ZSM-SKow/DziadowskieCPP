#include <iostream>
using namespace std;

int fib_it(int n);
int fib_rek(int n);

int main()
{
    int n, w1, w2;

    cout << "Daj n: ";
    cin >> n;

    w1 = fib_it(n);
    w2 = fib_rek(n);
    
    cout << "Wynik(it): " << w1 << endl;
    cout << "Wynik(reK): " << w2 << endl;
    

    system("pause");
    return 0;
}

int fib_it(int n)
{
    int i, f1, f2, w1;
    
    i = 1;
    w1 = 0;
    f1 = 1;
    f2 = 1;

    while (i != n - 1)
    {
        i++;
        w1 = f1 + f2;
        f1 = f2;
        f2 = w1;
    }

    return w1;
}

int fib_rek(int n)
{
    int w2;
    
    w2=0;
    
    if (n==1 || n==2 ) w2  = 1;
      else w2 = fib_rek(n-1) + fib_rek(n-2);
    
    return w2;
}
