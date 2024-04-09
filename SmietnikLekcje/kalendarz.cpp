#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Daj dzien roku: ";
    cin >> a;
    
    b=a%7;
    
    if (a >= 1 && a <= 366) {
    
    switch(b)
                                       {
           case 1: cout << "PONIEDZIA£EK" << endl; 
           break; 
           
           case 2: cout << "WTOREK" << endl; 
           break; 
           
           case 3: cout << "ŒRODA" << endl; 
           break;
           
           case 4: cout << "CZWARTEK" << endl; 
           break;
           
           case 5: cout << "PI¥TEK" << endl; 
           break;
           
           case 6: cout << "SOBOTA" << endl; 
           break;
           
           case 0: cout << "NIEDZIELA" << endl; 
           break;
                                       }
                                }
                                
                                else {
                                     cout << "POZA ZAKRESEM" << endl;
                                     }
                                
    system("pause");
    return 0;
}