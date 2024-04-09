#include <iostream>
using namespace std;

int main()
{
    int a=5;
    int i=1;
    int w3=1;
    
    while(i<=a) {
    w3=w3*i;
    i++;   
    }
    
    cout << w3 << endl;
    
    system("pause");
    return 0;
}