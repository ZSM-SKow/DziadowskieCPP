#include <iostream>
using namespace std;

int main()
{
    int n,w;
    n=0;
    w=0;
    
    for (int i=0; i<=5; i++) {
    
    cout << "daj liczbe: ";
    cin >> n;
    
    if (n>w || i==0) w=n;
                         }
                         
    cout << "najw to: " << w;
    
    system("pause");
    return 0;
}