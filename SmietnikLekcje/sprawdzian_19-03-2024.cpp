#include <iostream>
using namespace std;

int parzyste(int n);

int main()
{
    int n;
    
    cout << "Daj n: ";
    cin >> n;
    
    cout << "Wynik: " << parzyste(n) << endl;
    
    system("pause");
    return 0;
}

int parzyste(int n)
{
    int w = 0;
    
    int i = 0;
    
    while(i < n) {
            w += 2;
            i++;
    }
    
    return w;   
}
