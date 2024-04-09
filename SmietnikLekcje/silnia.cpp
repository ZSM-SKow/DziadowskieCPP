#include <iostream>
using namespace std;

int main()
{
    int i,n,silnia;
    silnia=1;
    cout << "dawaj" << endl;
    cin >> n;
    
    for(i=1;i<=n;i++) silnia=silnia*i;
    cout << silnia << endl;
    
    system("pause");
    return 0;
}
