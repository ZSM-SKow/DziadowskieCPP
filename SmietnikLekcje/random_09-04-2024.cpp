#include <iostream>
using namespace std;

int main()
{
    int tab[5];
    int i = 0;

    srand(time(NULL));

    cout << "Wygenerowane liczby: ";
    while (i < 5) {
          
        tab[i] = rand() % 6 + 5;
        cout << tab[i] << " ";
        i++;
    }

    system("pause");
    return 0;   
}
