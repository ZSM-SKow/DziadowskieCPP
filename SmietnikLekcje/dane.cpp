#include <iostream>
using namespace std;

void dane(string &, string &, string, string);

int main()
{
    string i1, n1, i2, n2;
    
    i2="adam";
    i2="nowak";
    
    cout << "imie: ";
    cin >> i1;
    
    cout << "nazwisko: ";
    cin >> n1;
    
    cout << i2 << n2;
    
    system("pause");
    return 0;   
}

void dane(string &i2, string &n2, string i1, string n1)
{
     i2 = i1;
     n2 = n1;
}