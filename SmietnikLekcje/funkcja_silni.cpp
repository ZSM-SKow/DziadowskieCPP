#include <iostream>
using namespace std;

int silniowanie(int a)
{
    int i,silnia;
    
    silnia=0;
    i=1;
    
    while(i<=a) {
               silnia += i;
               i++;
    }
    
    return silnia;
}

int main()
{
    int a,b,silnia;
    
    cout << "daj a: ";
    cin >> a;
    
    silnia=silniowanie(a);
    
    cout << "suma: " << silnia << endl;
    
    system("pause");
    return 0;
}