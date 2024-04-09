#include <iostream>
using namespace std;

int main()
{
    int a,w,i,p;
    a=0;
    w=0;
    i=0;
    
    do
    {
        cout << "daj: ";
        cin >> a;
        w=w+a;
        
        cout << "to wszystko? jak tak napisz 1: ";
        cin >> i;
        
        if(i==1) cout << "wynik: " << w;
        else {
             i=0; 
             }
    } while(i=0);
    
    system("pause");
    return 0;
}