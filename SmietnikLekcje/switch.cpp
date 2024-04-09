#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Podaj 1 lub 2: ";
    cin >> a;
    
    switch(a)
    {
             case 1: {
                     cout << "dales 1" << endl;
                     break;
                     }
                     
             case 2: {
                     cout << "dales 2" << endl;
                     break;
                     }
                     
             default: {
                      cout << "abc" << endl;
                      }
             
             
    }
    
    
    
    system("pause");
    return 0;
}
