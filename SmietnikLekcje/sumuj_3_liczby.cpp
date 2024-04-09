#include <iostream>
using namespace std;

int main()
{
    int n,w;
    
    n=0;
    w=0;
    
    for (int i=1; i<=3; i++) {
    
    cout << "daj liczbe: ";
    cin >> n;
    
    w=w+n;
    
    }
    
    cout << "suma: " << w << endl;
    
    system("pause");
    return 0;
}
