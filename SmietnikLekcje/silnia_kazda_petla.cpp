#include <iostream>
using namespace std;

int main()
{
    int a,w1,w2,w3,i;
    a=0;
    w1=1;
    w2=1;
    w3=1;
    i=1;
    
    cout << "daj: ";
    cin >> a;
    
    // silnia do while
    i=1;
     
    do
    {
        w1=w1*i;
        i++;
    } while(i<=a);
    
    // silnia while
    
    i=1;
     
    while(i<=a) {
    w3=w3*i;
    i++;   
    }
    
    // silnia for
    
    i=1;
    
    for(i=1;i<=a;i++) w2=w2+i;
    
    cout << "silnia(do while): " << w1 << endl;
    cout << "silnia(while): " << w3 << endl;
    cout << "silnia(for): " << w2 << endl;
     
    system("pause");
    return 0;
}
