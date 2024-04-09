#include <iostream>
using namespace std;

int main()
{
    int a,b,w1,w2;
    cout << "daj a: ";
    cin >> a;
    cout << "daj b: ";
    cin >> b;
    
    // NWD z odejmowaniem
    
    
    
    // NWD z modulo
    
    if(a<=0 || b<=0) {
            cout << "kys" << endl; 
            }
            
       else {
            
       int nwd;
       
       while(b!=0) {
       nwd=a%b;
       a=b;
       b=nwd;
    }
       
    cout << a << endl;
}
   system("pause");
   return 0; 
}
