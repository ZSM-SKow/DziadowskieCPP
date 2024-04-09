#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Podaj n: ";
    cin >> n;
    
    int tab[n];
    
    int i = 0;
    
    while (i < n) {
        tab[i] = i + 1;
        //cout << tab[i] << " ";
        i++;
    }
    
    int suma = 0;
    
    i = 0;
    
    while (i < n) {
        if (tab[i] % 2 == 0) {
            suma += tab[i];
        }
        i++;
    }
    
    cout << "Suma: " << suma << endl;
    
    system("pause");
    return 0;
}
